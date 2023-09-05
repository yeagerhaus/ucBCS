#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class List{

    public:
    typedef char Item;


    // Functions

    // Constructor
    List();


    //Destructor
    ~List();

    // Returns a bool. Checks if the invoking list is empty
    bool empty();

    // Insert a Node at the tail
    void append(Item a);

    // Removes the last item from the list
    void remove_last();

    // Friend function
    friend ostream& operator << ( ostream& out_s, const List& l );

private:


    struct Node {
        Item data;
        Node* next;
        Node* prev;
        Node(Item); 
    };


    Node* head;
    Node* tail;
    int size;

};

#endif // LIST_H
