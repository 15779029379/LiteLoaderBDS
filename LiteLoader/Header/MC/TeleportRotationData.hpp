// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TeleportRotationData {

#define AFTER_EXTRA
#define DISABLE_CONSTRUCTOR_PREVENTION_TELEPORTROTATIONDATA
public:
    char filler[32];
    class TeleportRotationData& operator=(class TeleportRotationData const&) = delete;
    TeleportRotationData(class TeleportRotationData const&) = default;
    TeleportRotationData() = default;
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELEPORTROTATIONDATA
public:
    class TeleportRotationData& operator=(class TeleportRotationData const &) = delete;
    TeleportRotationData(class TeleportRotationData const &) = delete;
    TeleportRotationData() = delete;
#endif

public:
    MCAPI TeleportRotationData(class RelativeFloat const &, class RelativeFloat const &, class std::optional<class Vec2> const &);

protected:

private:

};