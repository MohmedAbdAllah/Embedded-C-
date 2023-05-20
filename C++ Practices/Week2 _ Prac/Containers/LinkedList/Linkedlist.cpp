/******************************************************
 * Purpose: this file include the methods of linkedlist
*******************************************************/
#include "Linkedlist.h"

/************************************************************
 * Purpose: this function is used to print the linkedlist
 * Function_Name: print
 * Parameter: Node*
 * Return: void
*************************************************************/
void print_list(Node* Head){
    while(Head){
        cout<< "Name: "<<Head->record.name;
        cout<< ", Address: "<<Head->record.address << endl;
        Head = Head->Next;
    }
}