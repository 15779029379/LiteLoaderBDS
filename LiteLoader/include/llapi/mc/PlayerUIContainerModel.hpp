/**
 * @file  PlayerUIContainerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PlayerUIContainerModelBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerUIContainerModel.
 *
 */
class PlayerUIContainerModel : public PlayerUIContainerModelBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERUICONTAINERMODEL
public:
    class PlayerUIContainerModel& operator=(class PlayerUIContainerModel const &) = delete;
    PlayerUIContainerModel(class PlayerUIContainerModel const &) = delete;
    PlayerUIContainerModel() = delete;
#endif

public:
    /**
     * @vftbl  1
     * @hash   1093602823
     */
    virtual ~PlayerUIContainerModel();
    /**
     * @vftbl  6
     * @hash   -1403860986
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  12
     * @hash   -334124315
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  15
     * @hash   -331353752
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @hash   -330430231
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  19
     * @hash   -376678356
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  21
     * @symbol ?_getContainerOffset@PlayerUIContainerModel@@MEBAHXZ
     * @hash   1890776324
     */
    virtual int _getContainerOffset() const;
    /**
     * @symbol ??0PlayerUIContainerModel@@QEAA@W4ContainerEnumName@@AEAVPlayer@@@Z
     * @hash   -330236061
     */
    MCAPI PlayerUIContainerModel(enum ContainerEnumName, class Player &);

};