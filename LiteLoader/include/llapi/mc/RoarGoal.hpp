/**
 * @file  RoarGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RoarGoal.
 *
 */
class RoarGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROARGOAL
public:
    class RoarGoal& operator=(class RoarGoal const &) = delete;
    RoarGoal(class RoarGoal const &) = delete;
    RoarGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   99717163
     */
    virtual ~RoarGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@RoarGoal@@UEAA_NXZ
     * @hash   -2078216433
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@RoarGoal@@UEAA_NXZ
     * @hash   303489821
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@RoarGoal@@UEAAXXZ
     * @hash   253114584
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@RoarGoal@@UEAAXXZ
     * @hash   -1908616072
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@RoarGoal@@UEAAXXZ
     * @hash   480352355
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@RoarGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   173976417
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0RoarGoal@@QEAA@AEAVMob@@@Z
     * @hash   14542684
     */
    MCAPI RoarGoal(class Mob &);

};