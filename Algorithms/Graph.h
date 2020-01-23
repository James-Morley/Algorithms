#include "pch.h"
#include <vector>
#include <string>

#ifndef _GRAPH_H
#define _GRAPH_H

class Graph {
	
	private:
		std::vector<std::vector<int>> adjList;
		size_t N;
	
	public: 

		struct Edge {
			int src, dest;
		};

		Graph(const std::vector<Edge> &edges, const size_t& N);
		~Graph();

		void printGraph(const Graph& g, const size_t& N) const;

};

#endif // !GRAPH_H