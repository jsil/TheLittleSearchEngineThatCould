/* 
 * File:   main.cpp
 * Author: taylor
 *
 * Created on November 6, 2012, 12:31 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "Driver.h"
#include <cstring>

using namespace std;

/*
 * 
 */
int main(int argc, char* argv[]) {
    bool fail = false;

    Driver driver;


    if (argc == 3) {

        if (argv[1] == std::string("-IM")) {
            if (argv[2] == std::string("-A")) {
                //cout << "ring-a-ding" << endl;
                driver.interactive(0);
            } else if (argv[2] == std::string("-H")) {
                driver.interactive(1);
            } else {
                fail = true;
            }
        } else if (argv[1] == std::string("-MM")) {
            driver.maintenance(argv[2]);
        } else if (argv[1] == std::string("-SM")){
            driver.stressTest(argv[2]);
        } else {
            fail = true;
        }

    }else {                         
        fail = true;
    }



    return 0;
}

