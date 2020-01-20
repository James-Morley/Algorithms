#include "pch.h"
#include "BinaryTree.h"
#include "Node.h"

BinaryTree::BinaryTree(const Node& _root) {
	root = _root;
}


void BinaryTree::setRoot(const Node& _root) {
	root = _root;
}

const Node& BinaryTree::getRoot() const {
	return root;
}

void BinaryTree::insert(const Node& node) {

}