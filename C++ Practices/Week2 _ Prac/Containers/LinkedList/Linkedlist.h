/***********************************************************
 * Purpose: this file includes the implementation of linkedlist container
***********************************************************/

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <iostream>

using namespace std;

struct Record{
    string name;
    string address;
};

struct Node{
    
    Record record;
    Node* Next;
};

void print_list(Node*);

#endif
