/****************************************************************
 * Purpose: this code include some linked list practices
*************************************************************/
#include "Linkedlist.h"

int main(){
    Node* Head = new Node;
    Head->record.name = "Mohamed_Abdallah";
    Head->record.address = "AinShams_Cairo";

    Node* firstNode = new Node;
    firstNode->record.name = "Abdo_Abdallah";
    firstNode->record.address = "AinShams_Cairo";

    Head->Next = firstNode;
    firstNode->Next = nullptr;
    
    print_list(Head);

    return 0;
}