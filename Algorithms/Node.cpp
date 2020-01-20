#include "pch.h"
#include "Node.h"
#include <iostream>

int Node::id = 0;

//CONSTRUCTORS AND DESTRUCTORS
Node::Node(const int& _value) {
	id++;
	value = _value;
	left = nullptr;
	right = nullptr;
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

void Node::setLeft(Node& node) {
	left = &node;
}

Node& Node::getLeft() const {
	return *left;
}

void Node::setRight(Node& node) {
	right = &node;
}

Node& Node::getRight() const {
	return *right;
}

//COPY CONSTRUCTOR AND COPY ASSIGNMENT
Node::Node(const Node& node) {
	value = node.getValue();
	left = &node.getLeft();
	right = &node.getRight();
}

Node& Node::operator = (const Node& other) {
	if (this != &other) {

		left = nullptr;
		delete left;
		right = nullptr;
		delete right;

		id = other.getValue();
		left = &other.getLeft();
		right = &other.getRight();

	}
	return *this;
}

std::ostream& operator << (std::ostream& os, const Node& node) {
	os << "Node " << Node::id << " has ID: " << node.getValue() << "\n";
	return os;
}