#pragma once

#include <any>
#include "frameParameter.h"

class keyframeParameterPack;

class sequenceable {
public:
    sequenceable() = default;
    virtual void onPlay(const LIBSEQ::frameParameter& args) = 0;
};