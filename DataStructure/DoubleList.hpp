//
//  DoubleList.hpp
//  DataStructure
//
//  Created by Cinepapaya on 4/5/17.
//  Copyright © 2017 FandangoLatam. All rights reserved.
//

#ifndef DoubleList_hpp
#define DoubleList_hpp

#include <stdio.h>
#include "CNode.hpp"

class DoubleList
{
private:
    CNode* root;
public:
    DoubleList()
    {
        root = NULL;
    }
    void addNode(int value)
    {
        if (root == NULL)
        {
            CNode* pNode = new CNode(value);
            root = pNode;
            return;
        }
        
        CNode* pNode = root;
        while(pNode->next != NULL)
        {
            pNode = pNode->next;
        }
        
        CNode* newNode = new CNode(value);
        pNode->next = newNode;
        newNode->prev = pNode;
    }
    
    void printReverseList()
    {
        if (root == NULL)
            return;
        
        CNode* pNode = root;
        while(pNode->next != NULL)
        {
            pNode = pNode->next;
        }
        
        while(pNode != NULL)
        {
            printf("%d ",pNode->value);
            pNode = pNode->prev;
        }
        
        printf("\n");
    }
};
#endif /* DoubleList_hpp */
