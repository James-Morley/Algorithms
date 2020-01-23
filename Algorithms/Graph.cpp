#include "pch.h"
#include "Graph.h"
#include <iostream>


Graph::Graph(const std::vector<Edge>& edges, const size_t& N) {
	std::cout << "IN CONSTRUCTOR" << std::endl;
	
	adjList.resize(N);

	for (auto &edge : edges) {

		adjList[edge.src].push_back(edge.dest);

	}
}

Graph::~Graph() {
	std::cout << "IN DESTRUCTOR" << std::endl;
}

void Graph::printGraph(const Graph& g, const size_t& N) const {
	
	for (size_t i = 0; i < N; i++) {

		std::cout << i << " --> ";

		for (int v : g.adjList[i]) {

			std::cout << v << " ";

		}
		std::cout << "\n";
	}

}