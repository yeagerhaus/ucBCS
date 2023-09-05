#include <iostream>
#include <bits/stdc++.h>

using namespace std;
 
// to represent linked list which is a set
struct Item;
 
// to represent Node of linked list. Every
// node has a pointer to representative
struct Node
{
    int val;
    Node *next;
    Item *itemPtr;
};
 
// A list has a pointer to head and tail
struct Item
{
    Node *hd, *tl;
};
 
// To represent union set
class ListSet
{
private:
 
    // Hash to store addresses of set representatives
    // for given values. It is made global for ease of
    // implementation. And second part of hash is actually
    // address of Nodes. We typecast addresses to long
    // before storing them.
    unordered_map<int, Node *> nodeAddress;
 
public:
    void makeset(int a);
    Item* find(int key);
    void Union(Item *i1, Item *i2);
};
 
// To make a set with one object
// with its representative
void ListSet::makeset(int a)
{
    // Create a new Set
    Item *newSet = new Item;
 
    // Create a new linked list node
    // to store given key
    newSet->hd = new Node;
 
    // Initialize head and tail
    newSet->tl = newSet->hd;
    nodeAddress[a] = newSet->hd;
 
    // Create a new set
    newSet->hd->val = a;
    newSet->hd->itemPtr = newSet;
    newSet->hd->next = NULL;
}
 
// To find representative address of a
// key
Item *ListSet::find(int key)
{
    Node *ptr = nodeAddress[key];
    return (ptr->itemPtr);
}
 
// union function for joining two subsets
// of a universe.  Mergese set2 into set1
// and deletes set1.
void ListSet::Union(Item *set1, Item *set2)
{
    Node *cur = set2->hd;
    while (cur != 0)
    {
        cur->itemPtr = set1;
        cur = cur->next;
    }
 
    // Join the tail of the set to head
    // of the input set
    (set1->tl)->next = set2->hd;
    set1->tl = set2->tl;
 
    delete set2;
}
 
