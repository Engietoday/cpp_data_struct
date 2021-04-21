#pragma once
// This class is a basic implementation of a graph in C++.
// Author: Ao Yu

#include <iostream>
#include <list>

using namespace std;

class Graph {
private:
	int V;
	list<int>* adj;
	void DFS_helper(int s, bool* visited);
public:
	Graph(int v);
	void addEdge(int, int);
	void deleteEdge(int);
	void BFS(int);
	void DFS(int);
};