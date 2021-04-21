#include <iostream>

using namespace std;
struct node {
	int val;
	node* next = nullptr;
};

class LinkedList {
public:
	LinkedList(node*);
	node* head;
	int number_of_nodes;
	void push_back(int);
	int pop_back();
	node* get_last_node(node*);
	void print_list();
private:
};