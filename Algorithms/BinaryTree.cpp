#include "pch.h"
#include "BinaryTree.h"
#include <iostream>

BinaryTree::BinaryTree() {
	root = nullptr;
}

BinaryTree::~BinaryTree() {
	deleteTree(root);
}

void BinaryTree::deleteTree(Node* node) {
	if (node != NULL) {
		deleteTree(node->left);
		deleteTree(node->right);
		delete node;
	}
}

void BinaryTree::insert(const int& key) {

	//THE PROBLEM IS WHEN A NEW NODE IS ADDED TO ROOT AS SOON AS WE LEAVE
	//THIS FUNCTION THE POINTER TO THE NODE WE JUST ADDED IS LOST
	//THEREFORE IF ROOT IS 0 AND ADD 1 - THE POINTER FROM 0 TO 1 IS
	//DESTROYED SO WHEN WE ADD 2 0'S POINTER TO ONE IS GONE.


	if (this->root == NULL) {

		root = new Node;
		root->value = key;
		root->left = NULL;
		root->right = NULL;

	}
	else {

		Node curr = *root;

		//Node& temp = *root->right;

		//THIS BIT IS FUCKED
		while (true) {

			if (key <= curr.value) {

				if (curr.left == nullptr) {

					Node n = { key,nullptr,nullptr };
					curr.left = &n;

					//curr.left = new Node { key,nullptr,nullptr };
					break;

				}
				else {

					curr = *curr.left;

				}
			}
			else if (key > curr.value) {

				if (curr.right == nullptr) {

					Node n = { key, nullptr, nullptr };
					curr.right = &n;

					//curr.right = new Node { key,nullptr,nullptr };
					break;

				}
				else {

					curr = *curr.right;

				}
			}
		}



	}
}

bool BinaryTree::contains(const int& key) const {
	return true;
}