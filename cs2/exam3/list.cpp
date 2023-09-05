#include "list.h"
#include <iostream>
using namespace std;


List::List(){

head = NULL; // Create empty list
tail = NULL;
size = 0;
}

  List::Node::Node(Item a) // Constructor
{
    data = a;
    next = prev = NULL;
}
List::~List(){

}

bool List::empty(){

     if(size == 0)
        return true;
     else
        return false;

}

void List::append(Item a){ // Appends an item to the tail of the list


    Node* temp = new Node(a);

    if(tail == NULL){
        head = tail = temp;
    }else{

        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
    size++;
}

void List::remove_last(){

    if(!empty()){
        Node* temp = tail; // Save address of Node to delete
        
        if (head == tail){
            head = NULL;
            tail = NULL;
            delete temp;
            size = 0;
        }

        tail = tail -> prev; // Point tail at the new last Node in the list
        tail -> next = NULL;
        delete temp;

        size--;

    }

}


ostream& operator << (ostream& out_s, const List& l){

    List::Node* cursor;

    for (cursor = l.head; cursor != NULL && cursor -> next != NULL; cursor = cursor -> next){
        out_s << cursor -> data;
    }

    if( cursor != NULL){
        out_s << cursor -> data;
    }
    return out_s;

}
