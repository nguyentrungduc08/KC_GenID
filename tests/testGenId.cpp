/* 
 * File:   testGenId.cpp
 * Author: cpu10664-local
 *
 * Created on Jul 4, 2018, 10:36:45 AM
 */

#include <stdlib.h>
#include <iostream>

/*
 * Simple C++ Test Suite
 */

void KC_GenIDHandler::genId(Z_idGen& _return, const std::string& idType);

void testGenId() {
    Z_idGen& _return;
    const std::string& idType;
    KC_GenIDHandler kC_GenIDHandler;
    kC_GenIDHandler.genId(_return, idType);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testGenId (newsimpletest) message=error message sample" << std::endl;
    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% newsimpletest" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testGenId (newsimpletest)" << std::endl;
    testGenId();
    std::cout << "%TEST_FINISHED% time=0 testGenId (newsimpletest)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

