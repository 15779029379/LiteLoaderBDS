// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class RuntimeLightingManager {

public:
    MCAPI void flushRunTimeLighting();
    MCAPI void updateBlockLight(class BlockPos const&, struct Brightness, struct Brightness, struct Brightness, struct Brightness, bool);

private:
    MCAPI void _checkForRelightingTask(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);
    MCAPI void _relightChunks(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);
    MCAPI void _removeProcessedSubchunks();
};