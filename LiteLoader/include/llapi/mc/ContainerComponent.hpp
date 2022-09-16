/**
 * @file  ContainerComponent.hpp
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
 * @brief MC class ContainerComponent.
 *
 */
class ContainerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERCOMPONENT
public:
    class ContainerComponent& operator=(class ContainerComponent const &) = delete;
    ContainerComponent(class ContainerComponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?containerContentChanged@ContainerComponent@@UEAAXH@Z
     * @hash   -824732856
     */
    virtual void containerContentChanged(int);
    /**
     * @symbol ??0ContainerComponent@@QEAA@XZ
     * @hash   1319816168
     */
    MCAPI ContainerComponent();
    /**
     * @symbol ??0ContainerComponent@@QEAA@$$QEAV0@@Z
     * @hash   1387113505
     */
    MCAPI ContainerComponent(class ContainerComponent &&);
    /**
     * @symbol ?_getRawContainerPtr@ContainerComponent@@QEAAPEAVFillingContainer@@XZ
     * @hash   949264185
     */
    MCAPI class FillingContainer * _getRawContainerPtr();
    /**
     * @symbol ?addAdditionalSaveData@ContainerComponent@@QEBAXAEAVCompoundTag@@@Z
     * @hash   356800344
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?addItem@ContainerComponent@@QEAA_NAEAVBlockSource@@AEAVItemStack@@HH@Z
     * @hash   -1050831026
     */
    MCAPI bool addItem(class BlockSource &, class ItemStack &, int, int);
    /**
     * @symbol ?addItem@ContainerComponent@@QEAA_NAEAVItemActor@@@Z
     * @hash   339937589
     */
    MCAPI bool addItem(class ItemActor &);
    /**
     * @symbol ?addItem@ContainerComponent@@QEAA_NAEAVItemStack@@@Z
     * @hash   1600458079
     */
    MCAPI bool addItem(class ItemStack &);
    /**
     * @symbol ?canBeSiphonedFrom@ContainerComponent@@QEBA_NXZ
     * @hash   104441754
     */
    MCAPI bool canBeSiphonedFrom() const;
    /**
     * @symbol ?canOpenContainer@ContainerComponent@@QEBA_NAEBVActor@@AEAVPlayer@@@Z
     * @hash   -1090596020
     */
    MCAPI bool canOpenContainer(class Actor const &, class Player &) const;
    /**
     * @symbol ?countItemsOfType@ContainerComponent@@QEBAHAEBVItemStack@@@Z
     * @hash   262191713
     */
    MCAPI int countItemsOfType(class ItemStack const &) const;
    /**
     * @symbol ?dropContents@ContainerComponent@@QEAAXAEAVBlockSource@@AEBVVec3@@_N@Z
     * @hash   79524904
     */
    MCAPI void dropContents(class BlockSource &, class Vec3 const &, bool);
    /**
     * @symbol ?findFirstSlotForItem@ContainerComponent@@QEBAHAEBVItemStack@@@Z
     * @hash   -1968341743
     */
    MCAPI int findFirstSlotForItem(class ItemStack const &) const;
    /**
     * @symbol ?getContainerSize@ContainerComponent@@QEBAHXZ
     * @hash   51687704
     */
    MCAPI int getContainerSize() const;
    /**
     * @symbol ?getItem@ContainerComponent@@QEBAAEBVItemStack@@H@Z
     * @hash   1300031347
     */
    MCAPI class ItemStack const & getItem(int) const;
    /**
     * @symbol ?getSlots@ContainerComponent@@QEBA?BV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
     * @hash   -578015006
     */
    MCAPI std::vector<class ItemStack const *> const getSlots() const;
    /**
     * @symbol ?hasRoomForItem@ContainerComponent@@QEAA_NAEBVItemActor@@@Z
     * @hash   432197517
     */
    MCAPI bool hasRoomForItem(class ItemActor const &);
    /**
     * @symbol ?hasRoomForItem@ContainerComponent@@QEAA_NAEBVItemStack@@@Z
     * @hash   -278773433
     */
    MCAPI bool hasRoomForItem(class ItemStack const &);
    /**
     * @symbol ?initFromDefinition@ContainerComponent@@QEAAXAEAVActor@@@Z
     * @hash   2060321018
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol ?initFromDefinition@ContainerComponent@@QEAAXAEAVActor@@AEBUContainerDescription@@@Z
     * @hash   1753537387
     */
    MCAPI void initFromDefinition(class Actor &, struct ContainerDescription const &);
    /**
     * @symbol ?isEmpty@ContainerComponent@@QEBA_NXZ
     * @hash   -1617880338
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol ?isPrivate@ContainerComponent@@QEBA_NXZ
     * @hash   -822241846
     */
    MCAPI bool isPrivate() const;
    /**
     * @symbol ?openContainer@ContainerComponent@@QEAA_NAEAVActor@@AEAVPlayer@@@Z
     * @hash   2056379322
     */
    MCAPI bool openContainer(class Actor &, class Player &);
    /**
     * @symbol ??4ContainerComponent@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   -1683763692
     */
    MCAPI class ContainerComponent & operator=(class ContainerComponent &&);
    /**
     * @symbol ?readAdditionalSaveData@ContainerComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -2096173262
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?rebuildContainer@ContainerComponent@@QEAAXAEAVActor@@W4ContainerType@@H_NH2@Z
     * @hash   -1928812726
     */
    MCAPI void rebuildContainer(class Actor &, enum ContainerType, int, bool, int, bool);
    /**
     * @symbol ?removeItem@ContainerComponent@@QEAAXHH@Z
     * @hash   -1205048579
     */
    MCAPI void removeItem(int, int);
    /**
     * @symbol ?removeItemsOfType@ContainerComponent@@QEAAXAEBVItemStack@@H@Z
     * @hash   -312320837
     */
    MCAPI void removeItemsOfType(class ItemStack const &, int);
    /**
     * @symbol ?serverInitItemStackIds@ContainerComponent@@QEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     * @hash   1997751768
     */
    MCAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @symbol ?setCustomName@ContainerComponent@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1700184690
     */
    MCAPI void setCustomName(std::string const &);
    /**
     * @symbol ?setItem@ContainerComponent@@QEAA_NHAEBVItemStack@@@Z
     * @hash   1226344938
     */
    MCAPI bool setItem(int, class ItemStack const &);
    /**
     * @symbol ?setLootTable@ContainerComponent@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   600223303
     */
    MCAPI void setLootTable(std::string const &, int);
    /**
     * @symbol ?unpackLootTable@ContainerComponent@@QEAAXAEAVLevel@@V?$AutomaticID@VDimension@@H@@@Z
     * @hash   -758438441
     */
    MCAPI void unpackLootTable(class Level &, class AutomaticID<class Dimension, int>);

//private:
    /**
     * @symbol ?_tryMoveInItem@ContainerComponent@@AEAA_NAEAVBlockSource@@AEAVItemStack@@HHH@Z
     * @hash   1909271261
     */
    MCAPI bool _tryMoveInItem(class BlockSource &, class ItemStack &, int, int, int);

private:

};