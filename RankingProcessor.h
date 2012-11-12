/* 
 * File:   RankingProcessor.h
 * Author: taylor
 *
 * Created on November 12, 2012, 1:16 AM
 */

#ifndef RANKINGPROCESSOR_H
#define	RANKINGPROCESSOR_H

class RankingProcessor {
public:
    RankingProcessor();
    RankingProcessor(const RankingProcessor& orig);
    virtual ~RankingProcessor();
    
    int rankTerm();
    
private:
    

};

#endif	/* RANKINGPROCESSOR_H */

