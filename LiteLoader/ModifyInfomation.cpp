#include <HookAPI.h>
#include <LLAPI.h>
#include <LoggerAPI.h>
#include <ServerAPI.h>
#include <regex>
#include <sstream>
#include <string>
//#include <MC/BedrockLog.hpp>
using namespace std;

THook(std::string, "?getServerVersionString@Common@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ") {
    return original() + "(ProtocolVersion " + to_string(LL::getServerProtocolVersion()) + ") with LiteLoaderBDS " + LL::getLoaderVersion().toString(true);
}


string& replace_all_distinct(string& str, const string& old_value, const string& new_value) {
    for (string::size_type pos(0); pos != string::npos; pos += new_value.length()) {
        if ((pos = str.find(old_value, pos)) != string::npos)
            str.replace(pos, old_value.length(), new_value);
        else
            break;
    }
    return str;
}

//Standardize BDS's output
THook(void, "?PlatformBedrockLogOut@@YAXIPEBD@Z",
      int, const char* ts) {
    string input = ts;
    std::string output = std::regex_replace(input, std::regex("\\[.*?\\]"), std::string("$1"));
    output.erase(std::remove(output.begin(), output.end(), '\n'), output.end());
    output.erase(output.find_first_of(' '), output.find_first_not_of(' '));
    output = replace_all_distinct(output, "NO LOG FILE! -  ", "");
    if (input.find("INFO") != input.npos) {
        Logger::setTitle("Server");
        Logger::Info() << output << Logger::endl;
        Logger::setTitle("LiteLoader");
    } else {
        Logger::setTitle("Server");
        Logger::Warn() << output << Logger::endl;
        Logger::setTitle("LiteLoader");
    }
}


THook(void, "?log@BedrockLog@@YAXW4LogCategory@1@V?$bitset@$02@std@@W4LogRule@1@W4LogAreaID@@IPEBDH4ZZ",
      int a1, int a2, __int64 a3, int a4, int a5, __int64 a6, int a7, __int64 a8, ...) {
    va_list va;
    auto text = (char*)a8;
    if (string(text).find("setting up server logging...") != string(text).npos) {
        return;
    }
    va_start(va, a8);
    return SymCall("?log_va@BedrockLog@@YAXW4LogCategory@1@V?$bitset@$02@std@@W4LogRule@1@W4LogAreaID@@IPEBDH4PEAD@Z",
                   void, unsigned int, unsigned int, int, int, unsigned int, __int64, __int64, __int64, __int64)(a1, a2, a3, a4, a5, a6, a7, a8, (__int64)va);
}

extern std::unordered_map<void*, string*> origin_res;
THook(void*, "?send@CommandOutputSender@@UEAAXAEBVCommandOrigin@@AEBVCommandOutput@@@Z",
      void* thi, void* ori, void* out) {
    auto it = origin_res.find(ori);
    if (it == origin_res.end()) {
        std::stringbuf sbuf;
        auto oBuf = std::cout.rdbuf();
        std::cout.rdbuf(&sbuf);
        auto rv = original(thi, ori, out);
        std::cout.rdbuf(oBuf);
        auto str = sbuf.str();
        std::istringstream iss(str);
        string line;
        while (getline(iss, line)) {
            //Logger::setTitle("Command");
            str.erase(str.find_last_of('\n'), str.find_last_not_of('\n'));
            Logger::Log() << line << Logger::endl;
            //Logger::setTitle("Liteloader");
        }
        return rv;
    }
    std::stringbuf sbuf;
    auto oBuf = std::cout.rdbuf();
    std::cout.rdbuf(&sbuf);
    auto rv = original(thi, ori, out);
    std::cout.rdbuf(oBuf);
    it->second->assign(sbuf.str());
    while (it->second->size() && (it->second->back() == '\n' || it->second->back() == '\r'))
        it->second->pop_back();
    origin_res.erase(it);
    return rv;
}
