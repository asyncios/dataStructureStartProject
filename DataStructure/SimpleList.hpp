//
//  SimpleList.hpp
//  DataStructure
//
//  Created by Cinepapaya on 4/5/17.
//  Copyright © 2017 FandangoLatam. All rights reserved.
//

#ifndef SimpleList_hpp
#define SimpleList_hpp

#include <stdio.h>
#include "CNode.hpp"

class SimpleList
{
private:
    CNode* root;
public:
    SimpleList()
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
    }
    
    void addNodeAtFirst(int value)
    {
        if (root == NULL)
        {
            CNode* pNode = new CNode(value);
            root = pNode;
            return;
        }
        CNode* newNode = new CNode(value);
        newNode->next = root;
        root = newNode;
    }
    
    void printList()
    {
        CNode* pNode = root;
        while(pNode != NULL)
        {
            printf("%d ",pNode->value);
            pNode = pNode->next;
        }
        printf("\n");
    }
    
};
#endif /* SimpleList_hpp */
