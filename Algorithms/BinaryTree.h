#include "pch.h"

#ifndef _BINARY_TREE_H
#define _BINARY_TREE_H

class BinaryTree {

	struct Node {
		int value;
		Node* left;
		Node* right;
	};

	private:
		Node* root;
		
		void deleteTree(Node* node);

	public:
		BinaryTree();
		~BinaryTree();

		void insert(const int& key);


};

#endif // !_BINARY_TREE_H
