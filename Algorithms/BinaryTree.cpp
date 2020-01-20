#include "pch.h"
#include "BinaryTree.h"
#include "Node.h"
#include <iostream>

BinaryTree::BinaryTree(const Node* _root) {
	*root = *_root;
}

void BinaryTree::setRoot(const Node* _root) {
	*root = *_root;
}

const Node& BinaryTree::getRoot() const {
	return *root;
}

void BinaryTree::insert(Node* node) {
	if (root == nullptr) {
		*root = *node;
	}
	else {

		Node* curr = root;

		while (true) {

			if (node->getValue() >= curr->getValue()) {

				if (curr->getLeft() == nullptr) {
					
					curr->setLeft(node);

					break;
				}
				else {
					
					

				}
			}
			else {

				if (curr->getRight() == nullptr) {

					curr->setRight(node);

					break;
				}
				else {



				}
			}

		}
	}
	std::cout << "FINISHED INSERTING" << std::endl;
}