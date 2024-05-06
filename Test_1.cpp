#include <iostream>

using namespace std;

// Problem: 1. Exam practice | Test: 1
// Write a recursive function that returns the amount of digits in a non negative number n.
int digits(int n) {
	if (n < 10) {
		return 1;
	}
	return 1 + digits(n / 10);
}

// Problem: 2. Exam practice | Test: 1
// Write a recursive function that prints all posotive numbers in a array in one line and all negative numbers in another line.
void printArray(int* arr, int size) {
	if (size == 0) {
		return;
	}
	if (arr[size - 1] >= 0) {
		cout << arr[size - 1] << " ";
	}

	printArray(arr, size - 1);

	if (arr[size - 1] < 0) {
		cout << arr[size - 1] << " ";
	}
}

int main() {

	// Problem: 1. Exam practice
	cout << "Problem: 1. Exam practice" << endl;

	int amount = digits(254697);
	cout << amount << endl;

	// Problem: 2. Exam practice
	cout << "Problem: 2. Exam practice" << endl;

	int arr[] = { 2, 3, -4, 5, -6 };
	printArray(arr, 5);

	return 0;
}