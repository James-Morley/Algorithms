#include "pch.h"
#include "Graph.h"
#include "BinaryTree.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main()
{

	//BinaryTree bt;	

	//std::srand(std::time(nullptr));

	//for (size_t i = 0; i < 13; i++) {
	//	int rnd = std::rand() % 10 + 1;
	//	std::cout << "INSERTING: " << rnd << std::endl;
	//	bt.insert(rnd);
	//}

	//std::cout << "\n";

	//bt.in_order_traversal();
	//bt.post_order_traversal();
	//bt.pre_order_traversal();



	std::vector<Graph::Edge> edges = {

		{0,1} , {1,2}, {2,0}, {2,1}, {3,2}, {4,5}, {5,4}
	};

	size_t N = 6;

	Graph g(edges, 6);

	g.printGraph(g, 6);

}