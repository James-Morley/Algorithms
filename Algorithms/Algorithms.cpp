#include "pch.h"
#include "BinaryTree.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main()
{

	BinaryTree bt;	
	std::srand(std::time(nullptr));

	for (size_t i = 0; i < 13; i++) {
		int rnd = std::rand() % 10 + 1;
		std::cout << "INSERTING: " << rnd << std::endl;
		bt.insert(rnd);
	}

	std::cout << "\n";

	//std::cout << "BFS: " << bt.bfs(4) << std::endl;

	bt.in_order_traversal();
	bt.post_order_traversal();
	bt.pre_order_traversal();

}