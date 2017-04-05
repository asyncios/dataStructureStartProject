//
//  CNode.hpp
//  DataStructure
//
//  Created by Cinepapaya on 4/5/17.
//  Copyright © 2017 FandangoLatam. All rights reserved.
//

#ifndef CNode_hpp
#define CNode_hpp

#include <stdio.h>

class CNode
{
public:
    int value;
    CNode* next;
    CNode* prev;
public:
    CNode(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

#endif /* CNode_hpp */
