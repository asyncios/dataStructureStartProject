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
#include <list>

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

int main(int argc, const char * argv[]) {
    
    list<int> *lista;
    lista = new list<int>();
    
    // insert code here...
    std::cout << "Hello, World!\n";
    callSimpleList();
    //callCircularSimpleList();
    //callCircularDoubleList();
    return 0;
}
