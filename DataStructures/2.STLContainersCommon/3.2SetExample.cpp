// C++ program illustrating the set
#include <bits/stdc++.h>
using namespace std;

// Function illustrating the set
void Set()
{
	// Set declaration
	set<int> s;
	unordered_set<int> us;
	multiset<int> ms;
	unordered_multiset<int> ums;
	int i;

	for (i = 1; i <= 5; i++) {

		// Inserting elements
		s.insert(2 * i + 1);
		us.insert(2 * i + 1);
		ms.insert(2 * i + 1);
		ums.insert(2 * i + 1);
		s.insert(2 * i + 1);
		us.insert(2 * i + 1);
		ms.insert(2 * i + 1);
		ums.insert(2 * i + 1);
	}

	// Iterator to access values
	// in set
	set<int>::iterator sitr;
	unordered_set<int>::iterator uitr;
	multiset<int>::iterator mitr;
	unordered_multiset<int>::iterator umitr;

	cout << "The difference: "
		<< endl;
	cout << "The output for set "
		<< endl;

	for (sitr = s.begin();
		sitr != s.end(); sitr++) {
		cout << *sitr << " ";
	}
	cout << endl;

	cout << "The output for "
		<< "unordered set " << endl;

	for (uitr = us.begin();
		uitr != us.end(); uitr++) {
		cout << *uitr << " ";
	}
	cout << endl;

	cout << "The output for "
		<< "multiset " << endl;

	for (mitr = ms.begin();
		mitr != ms.end();
		mitr++) {
		cout << *mitr << " ";
	}
	cout << endl;

	cout << "The output for "
		<< "unordered multiset "
		<< endl;

	for (umitr = ums.begin();
		umitr != ums.end();
		umitr++) {
		cout << *umitr << " ";
	}
	cout << endl;
}

// Driver Code
int main()
{
	// Function Call
	Set();

	return 0;
}
