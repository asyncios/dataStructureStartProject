//
//  COtherNode.hpp
//  DataStructure
//
//  Created by josue cadillo on 4/7/17.
//  Copyright © 2017 FandangoLatam. All rights reserved.
//

#ifndef COtherNode_hpp
#define COtherNode_hpp

#include <stdio.h>

class COtherNode
{
public:
    int value;
    COtherNode* next;
    COtherNode* prev;
public:
    COtherNode(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
    
};
#endif /* COtherNode_hpp */
