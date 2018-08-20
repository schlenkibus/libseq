#pragma once

#include <any>
#include "../lib/sequenceable.h"

class StringSequenceable : public sequenceable {
public:
    StringSequenceable(const std::string& s);
    virtual void onPlay(const LIBSEQ::frameParameter& args);
    std::string m_wrapped;
};