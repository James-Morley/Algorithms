#include "pch.h"
#include "Node.h"

#ifndef _BINARY_TREE_H
#define _BINARY_TREE_H

class BinaryTree {

	private:
		Node root;

	public:
		BinaryTree(const Node& root);

		void setRoot(const Node& root);
		const Node& getRoot() const;

		void insert(const Node& node);


};

#endif // !_BINARY_TREE_H