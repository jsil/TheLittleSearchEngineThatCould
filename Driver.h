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
    
    void interactive(int);
    void stressTest(char*);
    void maintenance(char*);
    
    
    
private:
    QueryProcessor * QP;
    DocumentParser * DP;
    IndexHandler * IH;

};

#endif	/* DRIVER_H */

