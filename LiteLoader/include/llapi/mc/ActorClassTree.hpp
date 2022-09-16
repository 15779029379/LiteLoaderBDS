/**
 * @file  ActorClassTree.hpp
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
 * @brief MC class ActorClassTree.
 *
 */
class ActorClassTree {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORCLASSTREE
public:
    class ActorClassTree& operator=(class ActorClassTree const &) = delete;
    ActorClassTree(class ActorClassTree const &) = delete;
    ActorClassTree() = delete;
#endif

public:
    /**
     * @symbol ?getEntityTypeIdLegacy@ActorClassTree@@SA?AW4ActorType@@W42@@Z
     * @hash   1434024732
     */
    MCAPI static enum ActorType getEntityTypeIdLegacy(enum ActorType);
    /**
     * @symbol ?hasCategory@ActorClassTree@@SA_NAEBW4ActorCategory@@W42@@Z
     * @hash   752066583
     */
    MCAPI static bool hasCategory(enum ActorCategory const &, enum ActorCategory);
    /**
     * @symbol ?isHangingEntity@ActorClassTree@@SA_NAEBVActor@@@Z
     * @hash   115408677
     */
    MCAPI static bool isHangingEntity(class Actor const &);
    /**
     * @symbol ?isInstanceOf@ActorClassTree@@SA_NAEBVActor@@W4ActorType@@@Z
     * @hash   -1894658564
     */
    MCAPI static bool isInstanceOf(class Actor const &, enum ActorType);
    /**
     * @symbol ?isMob@ActorClassTree@@SA_NW4ActorType@@@Z
     * @hash   1665155853
     */
    MCAPI static bool isMob(enum ActorType);
    /**
     * @symbol ?isMobLegacy@ActorClassTree@@SA_NW4ActorType@@@Z
     * @hash   -1413997493
     */
    MCAPI static bool isMobLegacy(enum ActorType);
    /**
     * @symbol ?isOfType@ActorClassTree@@SA_NW4ActorType@@0@Z
     * @hash   1729707206
     */
    MCAPI static bool isOfType(enum ActorType, enum ActorType);
    /**
     * @symbol ?isTypeInstanceOf@ActorClassTree@@SA_NW4ActorType@@0@Z
     * @hash   1310695232
     */
    MCAPI static bool isTypeInstanceOf(enum ActorType, enum ActorType);

};