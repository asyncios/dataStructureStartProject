//
//  CircularSimpleList.hpp
//  DataStructure
//
//  Created by Cinepapaya on 4/5/17.
//  Copyright © 2017 FandangoLatam. All rights reserved.
//

#ifndef CircularSimpleList_hpp
#define CircularSimpleList_hpp

#include <stdio.h>
#include "CNode.hpp"

class CircularSimpleList
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
        pNode->next = newNode;
    }
    
    void printCircularList()
    {
        if (root == NULL)
            return;
        
        CNode* pNode = root;
        printf("%d ",pNode->value);
        
        while(pNode->next != root)
        {
            pNode = pNode->next;
            printf("%d ",pNode->value);
        }
        
        printf("\n");
    }
    
    void printLoopCircularList(int numberOfElements)
    {
        if (root == NULL)
            return;
        
        CNode* pNode = root;
        int cont = 0;
        
        
        while(cont < numberOfElements)
        {
            printf("%d ",pNode->value);
            pNode = pNode->next;
            cont++;
        }
        
        printf("\n");
        
    }
};


#endif /* CircularSimpleList_hpp */
