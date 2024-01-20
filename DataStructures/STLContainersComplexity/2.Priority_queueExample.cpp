// C++ program illustrating the
// priority queue
#include <bits/stdc++.h>
using namespace std;

void priorityQueue()
{

	int Array[5] = { 1,2, 3, 4, 5 };
	
	// Max heap by defualt
	priority_queue<int> Q;

    // Pushing elements into priority queue
	for (int i = 0; i < 5; i++) {
		// Pushes array elements to
		// priority queue and rearranges
		// to form max heap;
		Q.push(Array[i]);
	}

	// Maximum element in the priority
	// queue. (in this case it is 5)
	cout << "The maximum element is "
		<< Q.top() << endl;

	int i = 1;
	while (Q.empty() != 1) {
		int peek = Q.top();

		cout << "The " << i++
			<< " th max element is "
			<< peek << endl;
		//pop delete the elemento at the front of the queue
        // and reorganize the queue to keep the max heap property
		Q.pop();
	}

	cout << " Is priority queue "
		<< "Q empty() ?" << endl
		<< "check -->" << endl;

	// Checks whether priority
	// queue is empty
	if (Q.empty() == 1)
		cout << "The priority queue"
			<< " is empty" << endl;
	else
		cout << "The priority queue"
			<< " is not empty." << endl;
}

// Driver Code
int main()
{
	// Function Call
	priorityQueue();

	return 0;
}
