#include<iostream>
#include "LinkedList.h"

using namespace std;

// Problem: 1. Exam practice | Test: 3
	/*
		Write a function called stammer() for the linked list class.
		The function will double the size of the list by repeating the value of each element.
		For example, assume that a list stores [3, 4, 8, 2, 6]. After the call of list.stammer();, list should store [3, 3, 4, 4, 8,8, 2, 2, 6, 6].
	*/

void stammer() {
	Node* ptr = first;

	while (ptr != nullptr) {
		Node* temp = new Node(ptr->data);

		temp->next = ptr->next;
		ptr->next = temp;
		ptr = temp->next;

		count++;
	}
}

int main() {

	LinkList aList;

	for (int i = 0; i < 6; i++)
	{
		aList.insert(aList.getCount(), i + 3);// append data at the end
	}
	aList.display();

	// aList.insert(2, 4);
	aList.display();

	cout << endl << "Stammer Linked List: " << endl;
	aList.stammer();
	aList.display();

	return 0;
}