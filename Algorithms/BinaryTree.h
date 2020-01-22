#include "pch.h"
#include <iostream>

#ifndef _BINARY_TREE_H
#define _BINARY_TREE_H

class BinaryTree {

	struct Node {
		int value;
		Node* left;
		Node* right;
		bool visited = false;

		friend std::ostream& operator << (std::ostream& os, const Node& n) {
			os << "Node key: " << n.value << " has left:" << n.left << " has right: " << n.right << "\n";
			return os;
		}

	};

	private:
		Node* root;
		
		void deleteTree(Node* node);
		void insert(Node* node, const int& key);
		bool contains(Node* node, const int& key) const;
		bool bfs(Node* node, const int& key) const;

	public:
		BinaryTree();
		~BinaryTree();

		void insert(const int& key);
		bool contains(const int& key) const;
		bool bfs(const int& key) const;

};

#endif // !_BINARY_TREE_H