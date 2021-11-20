// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class PlanterItemComponent {
public:
    virtual ~PlanterItemComponent();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual bool useOn(class ItemStack&, class Actor&, class BlockPos const&, unsigned char, class Vec3 const&);
    virtual void unk_vfn_4();
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag();
    virtual void initializeFromNetwork(class CompoundTag const&);

public:
    MCAPI static void bindType();
    MCAPI static class HashedString const& getIdentifier();
};