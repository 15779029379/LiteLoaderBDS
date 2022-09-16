/**
 * @file  PathfinderNode.hpp
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
 * @brief MC class PathfinderNode.
 *
 */
class PathfinderNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PATHFINDERNODE
public:
    class PathfinderNode& operator=(class PathfinderNode const &) = delete;
    PathfinderNode() = delete;
#endif

public:
    /**
     * @symbol ??0PathfinderNode@@QEAA@AEBVBlockPos@@W4NodeType@@@Z
     * @hash   -2039038041
     */
    MCAPI PathfinderNode(class BlockPos const &, enum NodeType);
    /**
     * @symbol ??0PathfinderNode@@QEAA@AEBV0@@Z
     * @hash   1360156577
     */
    MCAPI PathfinderNode(class PathfinderNode const &);
    /**
     * @symbol ?distanceTo@PathfinderNode@@QEBAMPEAV1@@Z
     * @hash   412484182
     */
    MCAPI float distanceTo(class PathfinderNode *) const;
    /**
     * @symbol ?distanceToSqr@PathfinderNode@@QEBAMPEAV1@@Z
     * @hash   602295724
     */
    MCAPI float distanceToSqr(class PathfinderNode *) const;
    /**
     * @symbol ?equals@PathfinderNode@@QEAA_NPEAV1@@Z
     * @hash   -1983049824
     */
    MCAPI bool equals(class PathfinderNode *);
    /**
     * @symbol ?getCostMalus@PathfinderNode@@QEBAMXZ
     * @hash   -1497009242
     */
    MCAPI float getCostMalus() const;
    /**
     * @symbol ?getType@PathfinderNode@@QEBA?AW4NodeType@@XZ
     * @hash   524943334
     */
    MCAPI enum NodeType getType() const;
    /**
     * @symbol ?inOpenSet@PathfinderNode@@QEAA_NXZ
     * @hash   1053089676
     */
    MCAPI bool inOpenSet();
    /**
     * @symbol ?setCostMalus@PathfinderNode@@QEAAXM@Z
     * @hash   172973716
     */
    MCAPI void setCostMalus(float);
    /**
     * @symbol ?setMoveMalus@PathfinderNode@@QEAAXM@Z
     * @hash   -1787951052
     */
    MCAPI void setMoveMalus(float);

};