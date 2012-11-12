/* 
 * File:   QueryProcessor.h
 * Author: taylor
 *
 * Created on November 11, 2012, 8:41 PM
 */

#ifndef QUERYPROCESSOR_H
#define	QUERYPROCESSOR_H

class QueryProcessor {
public:
    QueryProcessor();
    QueryProcessor(const QueryProcessor& orig);
    virtual ~QueryProcessor();
    
    void parseCommand();
    
private:

};

#endif	/* QUERYPROCESSOR_H */

