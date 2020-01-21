#include "pch.h"
#include "BinaryTree.h"
#include <iostream>

BinaryTree::BinaryTree() {
	std::cout << "IN CONSTRUCTOR" << std::endl;
	root = nullptr;
}

BinaryTree::~BinaryTree() {
	std::cout << "IN DESTRUCTOR" << std::endl;
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

	std::cout << "IN INSERT KEY: " << key << std::endl;

	if (this->root == NULL) {

		root = new Node;
		root->value = key;
		root->left = NULL;
		root->right = NULL;

	}
	else {

		Node curr = *root;

		while (true) {

			if (key <= curr.value) {

				if (curr.left == nullptr) {

					root->left = new Node { key,nullptr,nullptr };
					break;

				}
				else {

					curr = *root->left;

				}
			}
			else if (key > curr.value) {

				if (curr.right == nullptr) {

					root->right = new Node { key,nullptr,nullptr };
					break;

				}
				else {

					curr = *root->right;

				}
			}
		}
	}
	std::cout << "SUCCESSFUL INSERTION" << std::endl;
}
