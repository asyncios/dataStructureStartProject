//
//  CTreeNode.hpp
//  DataStructure
//
//  Created by Cinepapaya on 4/6/17.
//  Copyright © 2017 FandangoLatam. All rights reserved.
//

#ifndef CTreeNode_hpp
#define CTreeNode_hpp

#include <stdio.h>

class CTreeNode
{
public:
    int value;
    CTreeNode* left;
    CTreeNode* right;
public:
    CTreeNode(int value)
    {
        this->value = value;
        left = NULL;
        right = NULL;
    }
};
#endif /* CTreeNode_hpp */
