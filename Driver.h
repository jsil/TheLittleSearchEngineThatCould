/* 
 * File:   Driver.h
 * Author: taylor
 *
 * Created on November 9, 2012, 11:19 AM
 */

#ifndef DRIVER_H
#define	DRIVER_H

#include "QueryProcessor.h"
#include "DocumentParser.h"
#include "IndexHandler.h"

#include <iostream>
#include <cstdlib>

using namespace std;

class Driver {
public:
    Driver();
    Driver(const Driver& orig);
    virtual ~Driver();
    
    void parseInput();
    void searchFor();
    
    void interactive();
    void stressTest();
    void maintenance();
    
    
    
private:

};

#endif	/* DRIVER_H */

