/**
 * @file  LayeredAbilities.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Ability.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LayeredAbilities.
 *
 */
class LayeredAbilities {

#define AFTER_EXTRA

#undef AFTER_EXTRA
public:
    /**
     * @symbol ??0LayeredAbilities@@QEAA@XZ
     * @hash   -1198628108
     */
    MCAPI LayeredAbilities();
    /**
     * @symbol ??0LayeredAbilities@@QEAA@AEBV0@@Z
     * @hash   945810801
     */
    MCAPI LayeredAbilities(class LayeredAbilities const &);
    /**
     * @symbol ?addSaveData@LayeredAbilities@@QEBAXAEAVCompoundTag@@@Z
     * @hash   1959454392
     */
    MCAPI void addSaveData(class CompoundTag &) const;
    /**
     * @symbol ?forEachAbility@LayeredAbilities@@QEBAXAEBV?$function@$$A6AXAEBVAbility@@PEBD@Z@std@@W4Options@Ability@@@Z
     * @hash   -467768704
     */
    MCAPI void forEachAbility(class std::function<void (class Ability const &, char const *)> const &, enum Ability::Options) const;
    /**
     * @symbol ?forEachAbility@LayeredAbilities@@QEBAXAEBV?$function@$$A6AXAEBVAbility@@W4AbilitiesIndex@@@Z@std@@W4Options@Ability@@@Z
     * @hash   473337522
     */
    MCAPI void forEachAbility(class std::function<void (class Ability const &, enum AbilitiesIndex)> const &, enum Ability::Options) const;
    /**
     * @symbol ?forEachLayer@LayeredAbilities@@QEAAXAEBV?$function@$$A6AXW4AbilitiesLayer@@AEAVAbilities@@@Z@std@@@Z
     * @hash   -1867006007
     */
    MCAPI void forEachLayer(class std::function<void (enum AbilitiesLayer, class Abilities &)> const &);
    /**
     * @symbol ?forEachLayer@LayeredAbilities@@QEBAXAEBV?$function@$$A6AXW4AbilitiesLayer@@AEBVAbilities@@@Z@std@@@Z
     * @hash   2067008835
     */
    MCAPI void forEachLayer(class std::function<void (enum AbilitiesLayer, class Abilities const &)> const &) const;
    /**
     * @symbol ?getAbility@LayeredAbilities@@QEAAAEAVAbility@@W4AbilitiesLayer@@W4AbilitiesIndex@@@Z
     * @hash   2112274318
     */
    MCAPI class Ability & getAbility(enum AbilitiesLayer, enum AbilitiesIndex);
    /**
     * @symbol ?getAbility@LayeredAbilities@@QEBAAEBVAbility@@W4AbilitiesIndex@@@Z
     * @hash   545807435
     */
    MCAPI class Ability const & getAbility(enum AbilitiesIndex) const;
    /**
     * @symbol ?getBool@LayeredAbilities@@QEBA_NW4AbilitiesIndex@@@Z
     * @hash   1790082667
     */
    MCAPI bool getBool(enum AbilitiesIndex) const;
    /**
     * @symbol ?getCommandPermissions@LayeredAbilities@@QEBA?AW4CommandPermissionLevel@@XZ
     * @hash   -164274382
     */
    MCAPI enum CommandPermissionLevel getCommandPermissions() const;
    /**
     * @symbol ?getFloat@LayeredAbilities@@QEBAMW4AbilitiesIndex@@@Z
     * @hash   969986809
     */
    MCAPI float getFloat(enum AbilitiesIndex) const;
    /**
     * @symbol ?getLayer@LayeredAbilities@@QEAAAEAVAbilities@@W4AbilitiesLayer@@@Z
     * @hash   -944338577
     */
    MCAPI class Abilities & getLayer(enum AbilitiesLayer);
    /**
     * @symbol ?getLayer@LayeredAbilities@@QEBAAEBVAbilities@@W4AbilitiesLayer@@@Z
     * @hash   430887439
     */
    MCAPI class Abilities const & getLayer(enum AbilitiesLayer) const;
    /**
     * @symbol ?getPermissionsHandler@LayeredAbilities@@QEAAAEAVPermissionsHandler@@XZ
     * @hash   1127808778
     */
    MCAPI class PermissionsHandler & getPermissionsHandler();
    /**
     * @symbol ?getPermissionsHandler@LayeredAbilities@@QEBAAEBVPermissionsHandler@@XZ
     * @hash   1356410760
     */
    MCAPI class PermissionsHandler const & getPermissionsHandler() const;
    /**
     * @symbol ?getPlayerPermissions@LayeredAbilities@@QEBA?AW4PlayerPermissionLevel@@XZ
     * @hash   2011926242
     */
    MCAPI enum PlayerPermissionLevel getPlayerPermissions() const;
    /**
     * @symbol ?loadSaveData@LayeredAbilities@@QEAA_NAEBVCompoundTag@@@Z
     * @hash   683846383
     */
    MCAPI bool loadSaveData(class CompoundTag const &);
    /**
     * @symbol ??4LayeredAbilities@@QEAAAEAV0@AEBV0@@Z
     * @hash   859444756
     */
    MCAPI class LayeredAbilities & operator=(class LayeredAbilities const &);
    /**
     * @symbol ??8LayeredAbilities@@QEBA_NAEBV0@@Z
     * @hash   1558724319
     */
    MCAPI bool operator==(class LayeredAbilities const &) const;
    /**
     * @symbol ?setAbility@LayeredAbilities@@QEAAXW4AbilitiesIndex@@M@Z
     * @hash   -1585852595
     */
    MCAPI void setAbility(enum AbilitiesIndex, float);
    /**
     * @symbol ?setAbility@LayeredAbilities@@QEAAXW4AbilitiesIndex@@_N@Z
     * @hash   774519449
     */
    MCAPI void setAbility(enum AbilitiesIndex, bool);
    /**
     * @symbol ?setCommandPermissions@LayeredAbilities@@QEAAXW4CommandPermissionLevel@@@Z
     * @hash   -1487787700
     */
    MCAPI void setCommandPermissions(enum CommandPermissionLevel);
    /**
     * @symbol ?setPermissions@LayeredAbilities@@QEAAXAEBVPermissionsHandler@@@Z
     * @hash   1533504682
     */
    MCAPI void setPermissions(class PermissionsHandler const &);
    /**
     * @symbol ?setPlayerPermissions@LayeredAbilities@@QEAAXW4PlayerPermissionLevel@@@Z
     * @hash   638484606
     */
    MCAPI void setPlayerPermissions(enum PlayerPermissionLevel);

//private:
    /**
     * @symbol ?_handlePlayerPermissionsChange@LayeredAbilities@@AEAAXW4PlayerPermissionLevel@@0@Z
     * @hash   -855629088
     */
    MCAPI void _handlePlayerPermissionsChange(enum PlayerPermissionLevel, enum PlayerPermissionLevel);

private:

};