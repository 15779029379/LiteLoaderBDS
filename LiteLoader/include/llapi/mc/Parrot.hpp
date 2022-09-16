/**
 * @file  Parrot.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Parrot.
 *
 */
class Parrot : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARROT
public:
    class Parrot& operator=(class Parrot const &) = delete;
    Parrot(class Parrot const &) = delete;
    Parrot() = delete;
#endif

public:
    /**
     * @vftbl  9
     * @symbol ?reloadHardcodedClient@Parrot@@MEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   -1830415429
     */
    virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @hash   -60699808
     */
    virtual ~Parrot();
    /**
     * @vftbl  30
     * @symbol ?getInterpolatedRidingPosition@Parrot@@UEBA?AVVec3@@M@Z
     * @hash   420477087
     */
    virtual class Vec3 getInterpolatedRidingPosition(float) const;
    /**
     * @vftbl  41
     * @hash   -249160383
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  61
     * @hash   -198636769
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  68
     * @hash   -185437434
     */
    virtual void __unk_vfn_68();
    /**
     * @vftbl  80
     * @symbol ?getShadowRadius@Parrot@@UEBAMXZ
     * @hash   -1337661760
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  82
     * @hash   -133720258
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  85
     * @hash   -137684383
     */
    virtual void __unk_vfn_85();
    /**
     * @vftbl  88
     * @hash   -128179132
     */
    virtual void __unk_vfn_88();
    /**
     * @vftbl  96
     * @hash   -108131711
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl  99
     * @hash   -105361148
     */
    virtual void __unk_vfn_99();
    /**
     * @vftbl  106
     * @hash   1332943623
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl  108
     * @hash   1334790665
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  109
     * @hash   1328979498
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  111
     * @hash   1356955169
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl  120
     * @symbol ?setSitting@Parrot@@UEAAX_N@Z
     * @hash   1329793377
     */
    virtual void setSitting(bool);
    /**
     * @vftbl  131
     * @symbol ?vehicleLanded@Parrot@@UEAAXAEBVVec3@@0@Z
     * @hash   -785155297
     */
    virtual void vehicleLanded(class Vec3 const &, class Vec3 const &);
    /**
     * @vftbl  133
     * @symbol ?playAmbientSound@Parrot@@UEAAXXZ
     * @hash   271902444
     */
    virtual void playAmbientSound();
    /**
     * @vftbl  134
     * @symbol ?getAmbientSound@Parrot@@UEBA?AW4LevelSoundEvent@@XZ
     * @hash   -1967827026
     */
    virtual enum LevelSoundEvent getAmbientSound() const;
    /**
     * @vftbl  135
     * @symbol ?isInvulnerableTo@Parrot@@UEBA_NAEBVActorDamageSource@@@Z
     * @hash   985391636
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl  182
     * @hash   1509264059
     */
    virtual void __unk_vfn_182();
    /**
     * @vftbl  194
     * @symbol ?canBePulledIntoVehicle@Parrot@@UEBA_NXZ
     * @hash   -595322297
     */
    virtual bool canBePulledIntoVehicle() const;
    /**
     * @vftbl  196
     * @hash   1590605982
     */
    virtual void __unk_vfn_196();
    /**
     * @vftbl  222
     * @hash   -2034256014
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  223
     * @hash   -2020032253
     */
    virtual void __unk_vfn_223();
    /**
     * @vftbl  248
     * @hash   -2007175034
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  251
     * @hash   -786620466
     */
    virtual void __unk_vfn_251();
    /**
     * @vftbl  269
     * @hash   -1906709211
     */
    virtual void __unk_vfn_269();
    /**
     * @vftbl  275
     * @symbol ?_playStepSound@Parrot@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
     * @hash   846704364
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
    /**
     * @vftbl  277
     * @hash   -1879927102
     */
    virtual void __unk_vfn_277();
    /**
     * @vftbl  285
     * @hash   -1895428993
     */
    virtual void __unk_vfn_285();
    /**
     * @vftbl  300
     * @symbol ?aiStep@Parrot@@UEAAXXZ
     * @hash   2023023125
     */
    virtual void aiStep();
    /**
     * @vftbl  313
     * @hash   -1210176411
     */
    virtual void __unk_vfn_313();
    /**
     * @vftbl  317
     * @hash   -1157463639
     */
    virtual void __unk_vfn_317();
    /**
     * @vftbl  349
     * @symbol ?_getWalkTargetValue@Parrot@@UEAAMAEBVBlockPos@@@Z
     * @hash   963831281
     */
    virtual float _getWalkTargetValue(class BlockPos const &);
    /**
     * @vftbl  351
     * @hash   -1055222849
     */
    virtual void __unk_vfn_351();
    /**
     * @vftbl  365
     * @hash   -1022899614
     */
    virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PARROT
    /**
     * @symbol ?_makeFlySound@Parrot@@MEBA_NXZ
     * @hash   -513876668
     */
    MCVAPI bool _makeFlySound() const;
    /**
     * @symbol ?useNewAi@Parrot@@MEBA_NXZ
     * @hash   -983209764
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @symbol ??0Parrot@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   1109564450
     */
    MCAPI Parrot(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getFlap@Parrot@@QEBAMXZ
     * @hash   366187236
     */
    MCAPI float getFlap() const;
    /**
     * @symbol ?getFlapSpeed@Parrot@@QEBAMXZ
     * @hash   -851591306
     */
    MCAPI float getFlapSpeed() const;
    /**
     * @symbol ?postAiStep@Parrot@@QEAAXXZ
     * @hash   513708325
     */
    MCAPI void postAiStep();

};