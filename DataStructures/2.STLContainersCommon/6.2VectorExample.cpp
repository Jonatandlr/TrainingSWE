// C++ program illustrating vector

#include <bits/stdc++.h>
using namespace std;

// Function displaying values
void display(vector<int> v)
{
	for (int i = 0;
		i < v.size(); i++) {
		cout << v[i] << " ";
	}
}

// Function illustrating vector
void Vector()
{
	int i;
	vector<int> v;
	for (i = 100; i < 106; i++) {

		// Inserts an element in vector
		v.push_back(i);
	}

	cout << "The vector after "
		<< "push_back is :" << v.size()
		<< endl;
	cout << "The vector now is :";
	display(v);
	cout << endl;

	// Deletes an element at the back
	v.pop_back();
	cout << "The vector after "
		<< "pop_back is :" << v.size()
		<< endl;
	cout << "The vector now is :";
	display(v);
	cout << endl;

	// Reverses the vector
	reverse(v.begin(), v.end());
	cout << "The vector after "
		<< "reversing is :" << v.size()
		<< endl;

	cout << "The vector now is :";
	display(v);
	cout << endl;

	// Sorts vector using Quick Sort
	sort(v.begin(), v.end());
	cout << "The vector after "
		<< "sorting is :" << v.size()
		<< endl;

	cout << "The vector now is :";
	display(v);
	cout << endl;

	// Erases ith position element
	v.erase(v.begin() + 2);

	cout << "The size of vector "
		<< "after erasing at position "
			"3 is :"
		<< v.size() << endl;
	cout << "The vector now is :";
	display(v);
	cout << endl;

	// Deletes the vector completely
	v.clear();

	cout << "The size of the vector"
		<< " after clearing is :"
		<< v.size() << endl;
	cout << "The vector now is :";
	display(v);
	cout << endl;
}

// Driver Code
int main()
{
	// Function Call
	Vector();

	return 0;
}
