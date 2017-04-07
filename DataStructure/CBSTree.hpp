//
//  CBSTree.hpp
//  DataStructure
//
//  Created by Cinepapaya on 4/6/17.
//  Copyright © 2017 FandangoLatam. All rights reserved.
//

#ifndef CBSTree_hpp
#define CBSTree_hpp

#include <stdio.h>
#include "CTreeNode.hpp"

class CBSTree
{
private:
    CTreeNode* root;

    CTreeNode* _searchvalue(CTreeNode* node, int value)
    {
        if (node == NULL) {
            return node;
        }
        if (node->value == value) {
            return node;
        }
        if (value < node->value) {
            return _searchvalue(node->left, value);
        }
        else{
            return _searchvalue(node->right, value);
        }
    }
    void _printPreOrder(CTreeNode* node)
    {
        if (node == NULL)
        {
            return;
        }
        
        printf("%d ", node->value);
        _printPreOrder(node->left);
        _printPreOrder(node->right);
    }
    
    void _printInOrder(CTreeNode* node)
    {
        if (node == NULL)
        {
            return;
        }
        
        _printInOrder(node->left);
        printf("%d ", node->value);
        _printInOrder(node->right);
    }
    
    void _printPostOrder(CTreeNode* node)
    {
        if (node == NULL)
        {
            return;
        }
        
        _printPostOrder(node->left);
        _printPostOrder(node->right);
        printf("%d ", node->value);
    }
public:
    void addvalue(int value)
    {
        if (root == NULL)
        {
            CTreeNode* newNode = new CTreeNode(value);
            root = newNode;
            return;
        }
        

        CTreeNode* pNode = root;
        while(pNode != NULL)
        {
            if (value == root->value)
            {
                return;
            }
            else if (value < root->value)
            {
                if (pNode->left == NULL)
                {
                    CTreeNode* newNode = new CTreeNode(value);
                    pNode->left = newNode;
                    return;
                }
                else
                {
                    pNode = pNode->left;
                }
            }
            else if (value > root->value)
            {
                if (pNode->right == NULL)
                {
                    CTreeNode* newNode = new CTreeNode(value);
                    pNode->right = newNode;
                    return;
                }
                else
                {
                    pNode = pNode->right;
                }
            }
        }
    }
    
    CTreeNode* searchvalue(int value)
    {
        return _searchvalue(root, value);
    }
    
    void printTree()
    {
        _printPostOrder(root);
    }
    
};

#endif /* CBSTree_hpp */
