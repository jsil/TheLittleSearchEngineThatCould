/* 
 * File:   InvertedFileIndex.h
 * Author: taylor
 *
 * Created on November 12, 2012, 1:23 AM
 */

#ifndef INVERTEDFILEINDEX_H
#define	INVERTEDFILEINDEX_H

#include "Word.h"
#include <vector>
#include <iostream>

using namespace std;

class InvertedFileIndex{
public:
    virtual void addWord(Word);
    virtual vector<string> searchWord(string);
private:
    
};


#endif	/* INVERTEDFILEINDEX_H */

