#include <iostream>
#include "bst.h"
using namespace std;

int main()
{

	binarySearchTree tree;

	tree.insert(53);
	tree.insert(11);
	tree.insert(7);
	tree.insert(5);
	tree.insert(2);
	tree.insert(23);

	tree.display();

	return 0;
}
