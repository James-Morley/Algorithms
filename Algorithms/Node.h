#include "pch.h"
#include <iostream>

#ifndef _NODE_H
#define _NODE_H

class Node {

	static int id;

	private:
		int value;
		Node* left;
		Node* right;

	public:
		//CONSTRUCTOR AND DESTRUCTOR
		Node(const int& value);
		Node();
		~Node();

		//GETTERS AND SETTERS
		const int& getValue() const;
		void setValue(const int& value);
		
		Node& getLeft() const;
		void setLeft(Node& node);

		Node& getRight() const;
		void setRight(Node& right);

		//COPY CONSTRUCTOR AND ASSIGNMENT
		Node(const Node& node);
		Node& operator = (const Node& node);

		friend std::ostream& operator <<(std::ostream& os, const Node& node);
};

#endif
