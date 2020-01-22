#include "pch.h"
#include "BinaryTree.h"
#include <iostream>
#include <algorithm>
#include <vector>

int main()
{

	BinaryTree bt;

	std::vector<int> vec;

	for (size_t i = 0; i < 10; i++) {
		vec.push_back(i);
	}

	for (unsigned int j = 0; j < vec.size(); j++) {

		std::cout << "INSERTING: " << vec.at(j) << std::endl;

		bt.insert(vec.at(j));
	}

	std::cout << "" << std::endl;

}