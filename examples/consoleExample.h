#pragma once

#include <string>
#include <iostream>
#include "../lib/libseq.h"

int main(int argc, char** argv) {
    auto sequencer = LIBSEQ::createSequencer();

    std::string s = "";

    while(true) {
        std::getline(std::cin, s);
        if(s == "stop") {
            break;
        } else {
            sequencer.put(s);
        }
    }
    return 0;
};

class consoleExample {

};