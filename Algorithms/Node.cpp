#include "pch.h"
#include "Node.h"
#include <iostream>

int Node::id = 0;

//CONSTRUCTORS AND DESTRUCTORS
Node::Node(const int& _value) {
	id++;
	value = _value;
	left = NULL;
	right = NULL;
}

Node::Node() {}

Node::~Node() {
	left = nullptr;
	delete left;

	right = nullptr;
	delete right;
}

//GETTERS AND SETTERS
void Node::setValue(const int& _value) {
	value = _value;
}

const int& Node::getValue() const {
	return value;
}

//LEFT AND RIGHT GETTERS AND SETTERS
void Node::setLeft(Node* node) {
	this->left = node;
}

const Node* Node::getLeft() const {
	return this->left;
}

void Node::setRight(Node* node) {
	this->right = node;
}

const Node* Node::getRight() const {
	return this->right;
}

//COPY CONSTRUCTOR AND COPY ASSIGNMENT
Node::Node(const Node& node) {

	delete left;
	left = nullptr;
	
	delete right;
	right = nullptr;

	value = node.getValue();
	*left = *node.left;
	*right = *node.right;
}


Node& Node::operator = (const Node& other) {
	if (this != &other) {

		delete left;
		left = nullptr;

		delete right;
		right = nullptr;

		value = other.getValue();
		*left = *other.getLeft();
		*right = *other.getRight();

	}
	return *this;
}


std::ostream& operator << (std::ostream& os, const Node& node) {
	os << "Node " << Node::id << " has ID: " << node.getValue() << "\n";
	return os;
}