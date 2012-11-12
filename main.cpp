/* 
 * File:   main.cpp
 * Author: taylor
 *
 * Created on November 6, 2012, 12:31 PM
 */

#include <cstdlib>
#include <iostream>
#include "Driver.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    bool fail = false;
    cout << argv[1]<< endl;
    if(argv[1] == "-IM")
        cout<< "ding" << endl;
    
    Driver driver;
  
    driver.interactive();
  


    if (fail == true) {
        cout << "Invalid command line argument, please try again" << endl;
        cout << "./a.out <mode> <filepath>" << endl;
        cout << "\tmode-" << endl;
        cout << "\t\t-IM interactive mode, regular searching of data base" << endl;
        cout << "\t\t-MM maintenance  mode, allows the user to expand or erase the corpus of documents" << endl;
        cout << "\t\t-ST stress Test (requires file path to properly formated command file)" << endl;
        exit(EXIT_FAILURE);
    }

    return 0;
}

