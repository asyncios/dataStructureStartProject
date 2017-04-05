//
//  CircularDoubleList.hpp
//  DataStructure
//
//  Created by Cinepapaya on 4/5/17.
//  Copyright © 2017 FandangoLatam. All rights reserved.
//

#ifndef CircularDoubleList_hpp
#define CircularDoubleList_hpp

#include <stdio.h>
#include "CNode.hpp"

class CircularDoubleList
{
private:
    CNode* root;
public:
    void addNode(int value)
    {
        if (root == NULL)
        {
            CNode* newNode = new CNode(value);
            newNode->next = newNode;
            newNode->prev = newNode;
            root = newNode;
            return;
        }
        
        CNode* pNode = root;
        while(pNode->next != root)
        {
            pNode = pNode->next;
        }
        
        CNode* newNode = new CNode(value);
        newNode->next = root;
        newNode->prev = pNode;
        root->prev = newNode;
        pNode->next = newNode;
    }
    
    void printReverseCircularList()
    {
        if (root == NULL)
            return;
        
        CNode* pNode = root;
        
        
        while(pNode->prev != root)
        {
            pNode = pNode->prev;
            printf("%d ",pNode->value);
        }
        
        pNode = pNode->prev;
        printf("%d ",pNode->value);
        printf("\n");
    }
    
    void printReverseLoopCircularList(int numberOfElements)
    {
        if (root == NULL)
            return;
        
        CNode* pNode = root;
        
        int cont = 0;
        while(cont < numberOfElements)
        {
            printf("%d ",pNode->value);
            pNode = pNode->prev;
            cont++;
        }
        
        printf("\n");
    }
};

#endif /* CircularDoubleList_hpp */
