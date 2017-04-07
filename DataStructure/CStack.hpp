//
//  CStack.hpp
//  DataStructure
//
//  Created by josue cadillo on 4/7/17.
//  Copyright © 2017 FandangoLatam. All rights reserved.
//

#ifndef CStack_hpp
#define CStack_hpp

#include <stdio.h>
#include "COtherNode.hpp"

class CStack
{
private:
    COtherNode* root;
    COtherNode* last;
public:
    void push(int value)
    {
        if (root == NULL)
        {
            COtherNode* pNode = new COtherNode(value);
            root = pNode;
            last = root;
            return;
        }
        
        COtherNode* pNode = root;
        while(pNode->next != NULL)
        {
            pNode = pNode->next;
        }
        
        COtherNode* newNode = new COtherNode(value);
        pNode->next = newNode;
        newNode->prev = pNode;
        last = newNode;
    }
    
    void pop()
    {
        if (last != NULL)
        {
            COtherNode* pNode = last->prev;
            delete last;
            last = pNode;
        }
    }
    
    int top()
    {
        if (last != NULL)
        {
            return last->value;
        }
        return -1;
    }
    
};
#endif /* CStack_hpp */
