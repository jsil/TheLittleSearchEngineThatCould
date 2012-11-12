/* 
 * File:   Word.h
 * Author: taylor
 *
 * Created on November 12, 2012, 1:25 AM
 */

#ifndef WORD_H
#define	WORD_H

#include <vector>
#include <cstdlib>
#include <iostream>

using namespace std;

class Word {
public:
    Word();
    Word(const Word& orig);
    virtual ~Word();
    
    void setValue(string);
    string getValue();
    void addDocument(string, int);
    string getDocument(int);
    int getRank(int);
    
private:
    string value;
    vector<string> Documents;
    vector<string> Rank;
    
    void orderByRank();

};

#endif	/* WORD_H */

