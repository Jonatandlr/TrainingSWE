// C++ program illustrating the queue
#include <bits/stdc++.h>
using namespace std;

// Function illustrating queue
void Queue()
{
	queue<int> q;
	int i;
	for (i = 101; i <= 105; i++) {

		// Inserts into the queue
		// in the FIFO manner
		q.push(i);

		cout << "The first and last"
			<< " elements of the queue "
			<< "are " << q.front()
			<< " " << q.back()
			<< endl;
	}

	// Check whether the queue is
	// empty or not
	while (q.empty() != 1) {

		// Pops the first element
		// of the queue
		cout << "The Element popped"
			<< " following FIFO is "
			<< q.front() << endl;
		q.pop();
	}
}

// Driver Code
int main()
{
	// Function Call
	Queue();

	return 0;
}
