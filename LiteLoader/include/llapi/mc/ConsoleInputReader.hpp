/**
 * @file  ConsoleInputReader.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ConsoleInputReader.
 *
 */
class ConsoleInputReader {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONSOLEINPUTREADER
public:
    class ConsoleInputReader& operator=(class ConsoleInputReader const &) = delete;
    ConsoleInputReader(class ConsoleInputReader const &) = delete;
#endif

public:
    /**
     * @symbol ??0ConsoleInputReader@@QEAA@XZ
     * @hash   1857572674
     */
    MCAPI ConsoleInputReader();
    /**
     * @symbol ?getLine@ConsoleInputReader@@QEAA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -650287555
     */
    MCAPI bool getLine(std::string &);
    /**
     * @symbol ?unblockReading@ConsoleInputReader@@QEAAXXZ
     * @hash   1813345109
     */
    MCAPI void unblockReading();
    /**
     * @symbol ??1ConsoleInputReader@@QEAA@XZ
     * @hash   -2074133008
     */
    MCAPI ~ConsoleInputReader();

};