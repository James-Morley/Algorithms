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

	std::vector<int> vec;

	for (size_t i = 0; i < 13; i++) {
		int rnd = std::rand() % 10 + 1;
		vec.push_back(rnd);
	}

	for (size_t j = 0; j < vec.size(); j++) {
		std::cout << "INSERTING: " << vec.at(j) << std::endl;
		bt.insert(vec.at(j));
	}

	std::cout << "BFS: " << bt.bfs(4) << std::endl;

}