// This class is a basic implementation of a graph in C++.
// Author: Ao Yu

#include "graph.h"

Graph::Graph(int v) {
	V = v; // Number of vertices
	adj = new list<int>[v]; // Pointer to adjacency list
}

void Graph::addEdge(int v, int w) {
	adj[v].push_back(w);
}

void Graph::BFS(int s) {
	bool* visited = new bool[V];
	for (int i = 0; i < V; i++) {
		visited[i] = false;
	}

	list<int> queue;

	visited[s] = true;
	queue.push_back(s);

	while (!queue.empty()) {
		s = queue.front();
		queue.pop_front();

		cout << "Checking adjacent vertices for vertex " << s << endl;
		for (auto i = adj[s].begin(); i != adj[s].end(); i++) {
			if (!visited[*i]) {
				cout << "Visited and enqueue " << *i << endl;
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}

void Graph::DFS(int s) {
	bool* visited = new bool[V];
	for (int i = 0; i < V; i++) {
		visited[i] = false;
	}

	this->DFS_helper(s, visited);
}

void Graph::DFS_helper(int s, bool* visited) {
	cout << "Visiting node " << s << endl;
	visited[s] = true;

	for (auto i = adj[s].begin(); i != adj[s].end(); i++) {
		if (!visited[*i]) {
			cout << "Going to vertex " << *i << " from vertex " << s << endl;
			this->DFS_helper(*i, visited);
		}
	}
}