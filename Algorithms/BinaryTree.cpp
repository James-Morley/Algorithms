#include "pch.h"
#include "BinaryTree.h"
#include <iostream>
#include <queue>

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
	return contains(root, key);
}

bool BinaryTree::contains(Node* node, const int& key) const {

	if (node == nullptr) {
		return false;
	}
	else if (node->value == key) {
		return true;
	}

	if (key <= node->value) {

		if (node->left == nullptr) {
			return false;
		}
		else if (node->left->value == key) {
			return true;
		}
		else {
			return contains(node->left, key);
		}

	}
	else if (key > node->value) {

		if (node->right == nullptr) {
			return false;
		}
		else if (node->right->value == key) {
			return true;
		}
		else {
			return contains(node->right, key);
		}

	}
	std::cout << "THIS MEANS SOMETHING WENT WRONG" << std::endl;
	return false;
}

bool BinaryTree::bfs(const int& key) const {
	return bfs(root, key);
}

bool BinaryTree::bfs(Node* node, const int& key) const {

	std::cout << "BFS KEY: " << key << std::endl;

	std::queue<Node> q;

	node->visited = true;

	q.push(*node);

	while (!q.empty()) {

		Node* n = &q.front();

		if (n->value == key) {
			std::cout << "SUCCESSFUL BFS!" << std::endl;
			return true;
		}

		if (n->left != nullptr) {
			q.push(*n->left);
		}
		if (n->right != nullptr) {
			q.push(*n->right);
		}

		q.pop();
	}
	std::cout << "BFS DOESN'T CONTAIN: " << key << std::endl;
	return false;
}