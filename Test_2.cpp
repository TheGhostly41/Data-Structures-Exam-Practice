#include<iostream>
#include "AQueue.h"
#include "LStack.h"

using namespace std;

// Problem: 2. Exam practice | Test: 2
// Complete the function reverseDisplay() for the stack class that displays all data in the stack starting from the bottom to the top.
// The function should not modify the stack.
void reverseDisplay() const {
	Stack tempStack;
	Node* ptr = top;

	while (ptr != nullptr) {
		tempStack.push(ptr->data);
		ptr = ptr->next;
	}

	tempStack.display();
}

// Problem: 1. Exam practice | Test: 2
// Add a function member commonElements() for the array based Queue class that returns a queue which contains the elements that two queues share in common.
Queue commonElements(const Queue& another) {
	Queue result;

	for (int i = 0; i < count; i++) {
		for (int j = 0; j < another.count; j++) {
			if (arr[(front + i) % size] == another.arr[(another.front + j) % another.size]) {
				result.enqueue(arr[(front + i) % size]);
			}
		}
	}
	return result;
}

int main() {

	// Problem: 1. Exam practice | Test: 2
	Queue q1(10);
	Queue q2(10);

	q1.enqueue(4);
	q1.enqueue(7);
	q1.enqueue(10);
	q1.enqueue(15);

	q2.enqueue(10);
	q2.enqueue(6);
	q2.enqueue(15);

	Queue q3 = q1.commonElements(q2);
	q3.display(); // the result should be 10 and 15

	// Problem: 2. Exam practice | Test: 2
	Stack s;
	s.push(10);
	s.push(40);
	s.push(25);
	s.push(12);
	s.push(18);

	cout << "Normal display: ";
	s.display();

	cout << "Reversed display: ";
	s.reverseDisplay();

	return 0;
}