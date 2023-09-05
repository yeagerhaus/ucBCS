#ifndef _BST_H
#define _BST_H

#include <iostream>

using namespace std;

class binarySearchTree
{
private:
	class node
	{
	public:
		int data;
		node * left;
		node * right;

		node(int x)
		{
			data = x;
			left = NULL;
			right = NULL;
		}
	};

	node * root;

	//recursive methods

	void recInsert(int x, node * &r)
	{
		if( r == NULL )
		{
			r = new node(x);
		}
		else
		{
			if( x < r->data )
			{
				recInsert(x, r->left);
			}
			else
			{
				recInsert(x, r->right);
			}
		}
	}

	//display items in tree rooted at r
	void recDisplay(node * r)
	{
		if( r != NULL )
		{
			recDisplay(r->left);
			cout << r->data << endl;		
			recDisplay(r->right);
		}
	}

	//return height of tree rooted at r
	int getHeight( node * r )
	{
		if( r == NULL )
		{
			return(0);
		}

		else
		{
			int leftHeight = getHeight(r->left);
			int rightHeight = getHeight(r->right);

			if(leftHeight > rightHeight)
			{
				return(leftHeight + 1);
			}
			else
			{
				return(rightHeight + 1);
			}
		}
	}

public:

	binarySearchTree()
	{
		root = NULL;
	}

	void insert(int x)
	{
		recInsert(x, root);
	}

	//display all items in tree
	void display()
	{
		recDisplay(root);
	}


};

#endif
