/* 
 * File:   AVLTree.h
 * Author: taylor
 *
 * Created on November 14, 2012, 10:08 AM
 */

#ifndef AVLTREE_H
#define	AVLTREE_H

#include "InvertedFileIndex.h"
#include "Word.h"

class AVLNode{
    int x;
    AVLNode * Left;
    AVLNode * Right;
    int height;
    
    friend AVLTree;
    
    AVLNode( int data, AVLNode * lst, AVLNode* rst, int h = 0)
        :x(data), left(lst), right(rst), height(h){}
    
  
};


class AVLTree : public InvertedFileIndex{
public:
    AVLTree();
    AVLTree(const AVLTree& orig);
    virtual ~AVLTree();
    
    
    
    addWord();
    searchWord();
    
private:
    insert(int val, AVLNode*);
    rotateWithLeftChild(AVLNode*);
    doubleRotateWithLeftChild(AVLNode*);
    rotateWithRightChild(AVLNode*);
    doubleRotateWithRightChild(AVLNode*);

};

#endif	/* AVLTREE_H */

