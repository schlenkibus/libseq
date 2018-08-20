#include <iostream>
#include "StringSequenceable.h"

StringSequenceable::StringSequenceable(const std::string& s) : sequenceable(), m_wrapped(s) {
}

void StringSequenceable::onPlay(const LIBSEQ::frameParameter& args) {
    auto vel = std::any_cast<int>(args.getParameter(LIBSEQ::frameParameter::Parameter::velocity));
    auto pbTime = std::any_cast<const char*>(args.getParameter(LIBSEQ::frameParameter::Parameter::playbackTime));

    std::cout << vel << " " << pbTime << " " << m_wrapped << '\n';
}