/* 
 * File:   Hash.h
 * Author: taylor
 *
 * Created on November 14, 2012, 1:31 AM
 */

#ifndef HASH_H
#define	HASH_H

#include "InvertedFileIndex.h"
#include "Word.h"
#include <vector>

class Hash : public InvertedFileIndex{
public:
    Hash();
    Hash(const Hash& orig);
    virtual ~Hash();
    
    
    void addWord();
    vector<Word>searchWord();
    
private:

};

#endif	/* HASH_H */

