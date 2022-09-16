/**
 * @file  SnackGoal.hpp
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
 * @brief MC class SnackGoal.
 *
 */
class SnackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNACKGOAL
public:
    class SnackGoal& operator=(class SnackGoal const &) = delete;
    SnackGoal(class SnackGoal const &) = delete;
    SnackGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1363616305
     */
    virtual ~SnackGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@SnackGoal@@UEAA_NXZ
     * @hash   2056349503
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@SnackGoal@@UEAA_NXZ
     * @hash   1828130365
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@SnackGoal@@UEAAXXZ
     * @hash   2039591384
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@SnackGoal@@UEAAXXZ
     * @hash   89814904
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@SnackGoal@@UEAAXXZ
     * @hash   -1235611101
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@SnackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   278951537
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @hash   -1402013944
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1352071735
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @symbol ?getRandomEatingEnd@SnackGoal@@MEBAHXZ
     * @hash   1383729899
     */
    virtual int getRandomEatingEnd() const;
    /**
     * @symbol ??0SnackGoal@@QEAA@AEAVMob@@AEBV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@MMM@Z
     * @hash   217784680
     */
    MCAPI SnackGoal(class Mob &, std::vector<class ItemDescriptor> const &, float, float, float);

//private:
    /**
     * @symbol ?_hasSnackableItems@SnackGoal@@AEAA_NXZ
     * @hash   1852043528
     */
    MCAPI bool _hasSnackableItems();
    /**
     * @symbol ?_isSnackableItem@SnackGoal@@AEBA_NAEBVItemStack@@@Z
     * @hash   1206696908
     */
    MCAPI bool _isSnackableItem(class ItemStack const &) const;
    /**
     * @symbol ?_updateHand@SnackGoal@@AEAAXAEBVItemStack@@@Z
     * @hash   -530095438
     */
    MCAPI void _updateHand(class ItemStack const &);

private:
    /**
     * @symbol ?CHEW_CHANCE@SnackGoal@@0HB
     * @hash   1336806587
     */
    MCAPI static int const CHEW_CHANCE;
    /**
     * @symbol ?EATING_TIME@SnackGoal@@0HB
     * @hash   -1438247491
     */
    MCAPI static int const EATING_TIME;
    /**
     * @symbol ?PATH_RANGE@SnackGoal@@0MB
     * @hash   -1927857531
     */
    MCAPI static float const PATH_RANGE;
    /**
     * @symbol ?RANDOM_EATING_END@SnackGoal@@0HB
     * @hash   -413849639
     */
    MCAPI static int const RANDOM_EATING_END;
    /**
     * @symbol ?RANDOM_EATING_START@SnackGoal@@0HB
     * @hash   -1873937860
     */
    MCAPI static int const RANDOM_EATING_START;
    /**
     * @symbol ?SEARCH_SIZE@SnackGoal@@0MB
     * @hash   1067607022
     */
    MCAPI static float const SEARCH_SIZE;
    /**
     * @symbol ?STOP_DIST_SQRD@SnackGoal@@0MB
     * @hash   -1884138874
     */
    MCAPI static float const STOP_DIST_SQRD;

};