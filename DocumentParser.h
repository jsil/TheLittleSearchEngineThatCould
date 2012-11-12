/* 
 * File:   DocumentParser.h
 * Author: taylor
 *
 * Created on November 11, 2012, 6:23 PM
 */

#ifndef DOCUMENTPARSER_H
#define	DOCUMENTPARSER_H

class DocumentParser {
public:
    DocumentParser();
    DocumentParser(const DocumentParser& orig);
    virtual ~DocumentParser();
    
    void rankWordBasedOnFile();
    void readInFile();
private:

};

#endif	/* DOCUMENTPARSER_H */

