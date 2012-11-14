/* 
 * File:   Driver.cpp
 * Author: taylor
 * 
 * Created on November 9, 2012, 11:19 AM
 */

#include "Driver.h"

Driver::Driver() {
    IH = new IndexHandler();
            
}

Driver::Driver(const Driver& orig) {
}

Driver::~Driver() {
}

void Driver::parseInput(){
}
void Driver::searchFor(){
}

void Driver::interactive(int status){
    bool control = true;
    if(status == 0){
        IH->readIndataset()
    }
    
    
}
void Driver::stressTest(char* filename){
    
}
void Driver::maintenance(char* filename){
    
}

