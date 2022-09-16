/**
 * @file  GameRule.hpp
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
 * @brief MC class GameRule.
 *
 */
class GameRule {

#define AFTER_EXTRA
// Add Member There
public:
union Value;
class ValidationError {
public:
    ValidationError() = delete;
    ValidationError(ValidationError const&) = delete;
    ValidationError(ValidationError const&&) = delete;
};
enum Type;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMERULE
public:
    class GameRule& operator=(class GameRule const &) = delete;
    GameRule() = delete;
#endif

public:
    /**
     * @symbol ??0GameRule@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   -2121769112
     */
    MCAPI GameRule(std::string const &, bool);
    /**
     * @symbol ??0GameRule@@QEAA@$$QEAV0@@Z
     * @hash   1783109957
     */
    MCAPI GameRule(class GameRule &&);
    /**
     * @symbol ??0GameRule@@QEAA@AEBV0@@Z
     * @hash   -422748511
     */
    MCAPI GameRule(class GameRule const &);
    /**
     * @symbol ?allowUseInCommand@GameRule@@QEBA_NXZ
     * @hash   -1537217404
     */
    MCAPI bool allowUseInCommand() const;
    /**
     * @symbol ?canBeModifiedByPlayer@GameRule@@QEBA_NXZ
     * @hash   -302617668
     */
    MCAPI bool canBeModifiedByPlayer() const;
    /**
     * @symbol ?getBool@GameRule@@QEBA_NXZ
     * @hash   1817315508
     */
    MCAPI bool getBool() const;
    /**
     * @symbol ?getFloat@GameRule@@QEBAMXZ
     * @hash   -691721386
     */
    MCAPI float getFloat() const;
    /**
     * @symbol ?getInt@GameRule@@QEBAHXZ
     * @hash   253381704
     */
    MCAPI int getInt() const;
    /**
     * @symbol ?getName@GameRule@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1425258532
     */
    MCAPI std::string const & getName() const;
    /**
     * @symbol ?getType@GameRule@@QEBA?AW4Type@1@XZ
     * @hash   85434877
     */
    MCAPI enum GameRule::Type getType() const;
    /**
     * @symbol ?getValue@GameRule@@QEBAAEBTValue@1@XZ
     * @hash   87232446
     */
    MCAPI union GameRule::Value const & getValue() const;
    /**
     * @symbol ??4GameRule@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   -438410984
     */
    MCAPI class GameRule & operator=(class GameRule &&);
    /**
     * @symbol ?requiresCheats@GameRule@@QEBA_NXZ
     * @hash   -1480213586
     */
    MCAPI bool requiresCheats() const;
    /**
     * @symbol ?resetType@GameRule@@QEAAXW4Type@1@@Z
     * @hash   648255805
     */
    MCAPI void resetType(enum GameRule::Type);
    /**
     * @symbol ?setBool@GameRule@@QEAA_N_NPEA_NPEAVValidationError@1@@Z
     * @hash   1904985847
     */
    MCAPI bool setBool(bool, bool *, class GameRule::ValidationError *);
    /**
     * @symbol ?setFloat@GameRule@@QEAA_NMPEA_NPEAVValidationError@1@@Z
     * @hash   -1647501319
     */
    MCAPI bool setFloat(float, bool *, class GameRule::ValidationError *);
    /**
     * @symbol ?setInt@GameRule@@QEAA_NHPEA_NPEAVValidationError@1@@Z
     * @hash   1405633601
     */
    MCAPI bool setInt(int, bool *, class GameRule::ValidationError *);
    /**
     * @symbol ?setTagDataNotFoundCallback@GameRule@@QEAAAEAV1@V?$function@$$A6AXAEAVGameRule@@@Z@std@@@Z
     * @hash   -741722765
     */
    MCAPI class GameRule & setTagDataNotFoundCallback(class std::function<void (class GameRule &)>);
    /**
     * @symbol ?setValidateValueCallback@GameRule@@QEAAAEAV1@V?$function@$$A6A_NAEBTValue@GameRule@@PEAVValidationError@2@@Z@std@@@Z
     * @hash   -1845660251
     */
    MCAPI class GameRule & setValidateValueCallback(class std::function<bool (union GameRule::Value const &, class GameRule::ValidationError *)>);
    /**
     * @symbol ??1GameRule@@QEAA@XZ
     * @hash   2061918968
     */
    MCAPI ~GameRule();

//protected:
    /**
     * @symbol ?_setDefaultValue@GameRule@@IEAAAEAV1@H@Z
     * @hash   1582183091
     */
    MCAPI class GameRule & _setDefaultValue(int);
    /**
     * @symbol ?_setDefaultValue@GameRule@@IEAAAEAV1@_N@Z
     * @hash   -1304666360
     */
    MCAPI class GameRule & _setDefaultValue(bool);

//private:
    /**
     * @symbol ?_set@GameRule@@AEAA_NAEBTValue@1@PEA_NPEAVValidationError@1@@Z
     * @hash   -727312619
     */
    MCAPI bool _set(union GameRule::Value const &, bool *, class GameRule::ValidationError *);

protected:

private:

};