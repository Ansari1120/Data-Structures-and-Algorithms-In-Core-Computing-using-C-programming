// C++ program for insertion in array
#include <bits/stdc++.h>
using namespace std;

// Function to print the element in stack
void printStack(stack<int> St)
{
	// Traverse the stack
	while (!St.empty()) {

		// Print top element
		cout << St.top() << ' ';

		// Pop top element
		St.pop();
	}
}

// Driver Code
int main()
{
	// Initialise stack
	stack<int> St;

	// Insert Element in stack
	St.push(4);
	St.push(3);
	St.push(2);
	St.push(1);

	// Print elements before pop
	// operation on stack
	printStack(St);

	cout << endl;

	// Pop the top element
	St.pop();

	// Print elements after pop
	// operation on stack
	printStack(St);
	return 0;
}

