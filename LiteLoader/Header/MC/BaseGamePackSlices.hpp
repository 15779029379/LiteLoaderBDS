// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class BaseGamePackSlices {

public:
    MCAPI void addFromVersions(std::vector<class BaseGameVersion> const&, class IResourcePackRepository const&, class mce::UUID const&);
    MCAPI void applyPackSlices(class BaseGameVersion const&, class IResourcePackRepository const&, class ResourcePackStack&) const;
};