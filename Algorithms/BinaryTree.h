#include "pch.h"

#ifndef _BINARY_TREE_H
#define _BINARY_TREE_H

class BinaryTree {

	struct Node {

		int value;
		Node* left;
		Node* right;


		Node& operator = (const Node& other) {
			value = other.value;
			this->left = other.left;
			this->right = other.right;
			return *this;
		}


	};

	private:
		Node* root;
		
		void deleteTree(Node* node);

	public:
		BinaryTree();
		~BinaryTree();

		void insert(const int& key);
		bool contains(const int& key) const;

};

#endif // !_BINARY_TREE_H