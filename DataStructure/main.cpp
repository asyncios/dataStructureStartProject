//
//  main.cpp
//  DataStructure
//
//  Created by Cinepapaya on 4/5/17.
//  Copyright © 2017 FandangoLatam. All rights reserved.
//

#include <iostream>
#include "SimpleList.hpp"
#include "DoubleList.hpp"
#include "CircularSimpleList.hpp"
#include "CircularDoubleList.hpp"
#include "CBSTree.hpp"
#include "CStack.cpp"
#include "CQueue.hpp"

using namespace std;

void callSimpleList()
{
    SimpleList* list = new SimpleList();
    list->addNode(3);
    list->addNode(200);
    list->addNodeAtFirst(4);
    list->addNodeAtFirst(5);
    list->addNodeAtFirst(1);
    list->printList();
}

void callDoubleList()
{
    DoubleList* list = new DoubleList();
    list->addNode(3);
    list->addNode(80);
    list->addNode(100);
    list->addNode(300);
    
    list->printReverseList();
}

void callCircularSimpleList()
{
    CircularSimpleList* list = new CircularSimpleList();
    list->addNode(3);
    list->addNode(80);
    list->addNode(100);
    list->addNode(300);
    list->printCircularList();
    list->printLoopCircularList(1);
}

void callCircularDoubleList()
{
    CircularDoubleList* list = new CircularDoubleList();
    list->addNode(3);
    list->addNode(80);
    list->addNode(100);
    list->addNode(300);
    //list->printReverseCircularList();
    list->printReverseLoopCircularList(30);
}

void callCBSTree()
{
    CBSTree* tree = new CBSTree();
    tree->addvalue(10);
    tree->addvalue(1);
    tree->addvalue(24);
    tree->addvalue(5);
    tree->addvalue(3);
    tree->addvalue(30);
    tree->addvalue(121);
    tree->printTree();
    tree->searchvalue(25);
}

void callCStack()
{
    CStack* stack = new CStack();
    stack->push(4);
    stack->push(120);
    stack->push(300);
    stack->push(500);
    int value;
    value = stack->top();
    printf("%d ",value);
    stack->pop();
    
    value = stack->top();
    printf("%d ",value);
}

void callCQueue()
{
    CQueue* queue = new CQueue();
    queue->push(4);
    queue->push(120);
    queue->push(300);
    queue->push(500);
    int value;
    value = queue->top();
    printf("%d ",value);
    queue->pop();
    value = queue->top();
    printf("%d ",value);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    //callSimpleList();
    //callCircularSimpleList();
    //callCircularDoubleList();
    //callCBSTree();
    //callCStack();
    callCQueue();
    return 0;
}
