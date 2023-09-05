// BST.h
#ifndef _TREE_H
#define _TREE_H

#include <iostream>

template <class T>
class Tree
{
    // Internal class which stores only Node related information.
    struct TreeNode
    {
        T data;
        TreeNode * left;
        TreeNode * right;

        TreeNode(T val):data(val),left(NULL),right(NULL)
        {
        }
    };
    TreeNode *root;
    void print(TreeNode*);
    void freeMemory(TreeNode*);
    void inOrderHelper(TreeNode *current, T* arr);
    int arrSize;
    int iOSize;
    
public:
    Tree();
    ~Tree();
    void insertNode(T);
    void print();
    bool isEmpty();
    T* inOrderTraversal();
    bool search(T item);
};

#include "Tree.template"
#endif // _TREE_H
