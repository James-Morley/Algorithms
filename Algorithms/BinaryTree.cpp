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

	if (this->root == NULL) {

		this->root = new Node;
		this->root->value = key;
		this->root->left = nullptr;
		this->root->right = nullptr;
	}
	else {
		insert(root, key);
	}
}

void BinaryTree::insert(Node* node, const int& key) {

	if (key <= node->value) {

		if (node->left == nullptr) {

			node->left = new Node;
			node->left->value = key;
			node->left->left = nullptr;
			node->left->right = nullptr;

		}
		else {

			insert(node->left, key);

		}

	}
	else if (key > node->value) {

		if (node->right == nullptr) {

			node->right = new Node;
			node->right->value = key;
			node->right->left = nullptr;
			node->right->right = nullptr;

		}
		else {

			insert(node->right, key);

		}
	}
}

bool BinaryTree::contains(const int& key) const {
	return true;
}