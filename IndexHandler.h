/* 
 * File:   IndexHandler.h
 * Author: taylor
 *
 * Created on November 11, 2012, 5:18 PM
 */

#ifndef INDEXHANDLER_H
#define	INDEXHANDLER_H

class IndexHandler {
public:
    IndexHandler();
    IndexHandler(const IndexHandler& orig);
    virtual ~IndexHandler();
    
    void writeOutDataset();
    void readIndataset();
    void findWord();
    void clearIndex();
    
    
private:

};

#endif	/* INDEXHANDLER_H */

