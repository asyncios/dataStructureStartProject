//
//  CQueue.hpp
//  DataStructure
//
//  Created by josue cadillo on 4/7/17.
//  Copyright © 2017 FandangoLatam. All rights reserved.
//

#ifndef CQueue_hpp
#define CQueue_hpp

#include <stdio.h>
#include "COtherNode.hpp"

class CQueue
{
private:
    COtherNode* root;
public:
    void push(int value)
    {
        if (root == NULL)
        {
            COtherNode* newNode = new COtherNode(value);
            root = newNode;
            return;
        }
        
        COtherNode* pNode = root;
        while(pNode->next != NULL)
        {
            pNode = pNode->next;
        }
        
        COtherNode* newNode = new COtherNode(value);
        pNode->next = newNode;
    }
    
    void pop()
    {
        if (root == NULL)
        {
            return;
        }
        
        COtherNode* pNode = root->next;
        delete root;
        root = pNode;
    }
    
    int top()
    {
        if (root != NULL)
        {
            return root->value;
        }
        return -1;
    }
};
#endif /* CQueue_hpp */
