#include "lib/linkedlist.h"
using namespace std;


int main()
{
	node* head = new node();
	head->val = 2;

	LinkedList mylist(head);
	mylist.push_back(3);
	mylist.push_back(11);
	mylist.push_back(14);
	mylist.push_back(10);
	mylist.print_list();

	cout << "Popped: " << mylist.pop_back() << endl;
	mylist.print_list();
	return 0;
}
