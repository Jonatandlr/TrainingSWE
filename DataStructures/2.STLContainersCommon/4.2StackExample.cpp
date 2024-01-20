// C++ program illustrating the stack
#include <bits/stdc++.h>
using namespace std;

// Function illustrating stack
void Stack()
{
	stack<int> s;
	int i;
	for (i = 0; i <= 5; i++) {
		cout << "The pushed element"
			<< " is " << i << endl;
		s.push(i);
	}

	// Points to top element of stack
	cout << "The top element of the"
		<< " stack is: " << s.top()
		<< endl;

	// Return size of stack
	cout << "The size of the stack"
		<< " is: " << s.size()
		<< endl;

	// Pops the elements of the
	// stack in the LIFO manner
	// Checks whether the stack
	// is empty or not
	while (s.empty() != 1) {
		cout << "The popped element"
			<< " is " << s.top()
			<< endl;
		s.pop();
	}
}

// Driver Code
int main()
{
	// Function Call
	Stack();

	return 0;
}
