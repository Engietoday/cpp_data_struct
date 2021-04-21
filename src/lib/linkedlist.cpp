#include "linkedlist.h"

LinkedList::LinkedList(node* _head) {
	head = _head;
	number_of_nodes = 1;
}

void LinkedList::push_back(int v) {
	node* last_node = this->get_last_node(this->head);
	node* new_node = new node();
	new_node->val = v;
	last_node->next = new_node;
	number_of_nodes++;
}
int LinkedList::pop_back() {
	int temp_val;
	node* prev = head;
	node* curr = head->next;

	if (number_of_nodes == 1) {
		return head->val;
	}
	else {
		while (curr->next != nullptr) {
			prev = curr;
			curr = curr->next;
		}
		temp_val = curr->val;
		prev->next = nullptr;
		delete curr;
		number_of_nodes--;
		return temp_val;
	}
}
node* LinkedList::get_last_node(node* current_node) {
	if (current_node->next == nullptr) {
		return current_node;
	}
	else {
		this->get_last_node(current_node->next);
	}
}

void LinkedList::print_list() {
	node* curr = head;
	while (curr != nullptr) {
		cout << curr->val << ", ";
		curr = curr->next;
	}
	cout << endl;
}