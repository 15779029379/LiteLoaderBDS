// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ChunkLoadPriority {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKLOADPRIORITY
public:
    class ChunkLoadPriority& operator=(class ChunkLoadPriority const &) = delete;
    ChunkLoadPriority(class ChunkLoadPriority const &) = delete;
    ChunkLoadPriority() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHUNKLOADPRIORITY
public:
#endif
    MCAPI static int getPlayerChunkPriority(class ChunkPos const &, class ChunkPos const &, class Vec3 const &);
    MCAPI static int getTickingAreaChunkPriority(class ChunkPos const &, class ChunkPos const &, class Vec3 const &, bool);


};