#include "pch.h"
#include "BinaryTree.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

int main()
{

	BinaryTree bt;

	std::vector<int> vec;

	for (size_t i = 0; i < 10; i++) {
		int rnd = rand() % 10;
		vec.push_back(rnd);
	}

	for (int j = 0; j < vec.size(); j++) {
		//std::cout << vec.at(j) << "\n";
		bt.insert(vec.at(j));
	}


}