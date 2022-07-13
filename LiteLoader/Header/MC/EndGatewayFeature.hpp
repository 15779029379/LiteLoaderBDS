// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EndGatewayFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDGATEWAYFEATURE
public:
    class EndGatewayFeature& operator=(class EndGatewayFeature const &) = delete;
    EndGatewayFeature(class EndGatewayFeature const &) = delete;
    EndGatewayFeature() = delete;
#endif


public:
    /*0*/ virtual ~EndGatewayFeature();
    /*3*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDGATEWAYFEATURE
#endif



};