#include <string>
#include <iostream>
#ifndef HUFFMAN_H
#define HUFFMAN_H

using namespace std;

class Huffman {
	private:
	/*** Node structure ***/
	class BinNode {
		public:
		char data;
		BinNode * left,
		* right;
		// BinNode constructor
		BinNode(char item) {
			data = item;
			left = right = 0;
			}
	};
	
	typedef BinNode * BinNodePointer;
	public:
	/*** Function members ***/
	Huffman();
	
	void buildDecodingTree(ifstream & codeIn);
	void insert(char ch, string code);
	void decode(ifstream & messageIn);
	void printTree(ostream & out, BinNodePointer root, int indent);
	void displayDecodingTree(ostream & out);
	
	/*** Data members ***/
	private:
	BinNodePointer myRoot;
};

//--- Definition of constructor
inline Huffman::Huffman() {
	myRoot = new BinNode('*');
}

//--- Definition of displayDecodingTree()
inline void Huffman::displayDecodingTree(ostream & out) {
	printTree(out, myRoot, 0);
}

#endif
