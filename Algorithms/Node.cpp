#include "pch.h"
#include "Node.h"

Node::Node(const int& _id) {
	id = _id;
}

void Node::setID(const int& _id) {
	id = _id;
}

const int& Node::getID() const {
	return id;
}