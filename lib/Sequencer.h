#pragma once

#include "sequenceable.h"
#include <vector>

class Sequencer {
public:
    Sequencer();
    void put(const sequenceable& item);
protected:
    std::vector<Track> m_tracks;
};