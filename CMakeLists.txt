cmake_minimum_required(VERSION 3.12)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_library(untitled lib/libseq.cpp lib/libseq.h examples/consoleExample.cpp examples/consoleExample.h lib/sequenceable.cpp lib/sequenceable.h examples/StringSequenceable.cpp examples/StringSequenceable.h lib/frameParameter.cpp lib/frameParameter.h lib/Sequencer.cpp lib/Sequencer.h lib/Track.cpp lib/Track.h)