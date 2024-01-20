#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void typeMaps()
{
    // declaration of maps
    map<int, int> M;
    unordered_map<int, int> UM;
    multimap<int, int> MM;
    unordered_multimap<int, int> UMM;

    // inserting data in maps first time 
    for (int i = 1; i < 5; i++)
    {
        M.insert({i, i * 10});
        UM.insert({i, i * 10});
        MM.insert({i, i * 10});
        UMM.insert({i, i * 10});
    }
    //inserting data in maps second time
    // this will not insert data in map or unordered map because key is already present
    for (int i = 1; i < 5; i++)
    {
        M.insert({i, i * 10});
        UM.insert({i, i * 10});
        MM.insert({i, i * 10});
        UMM.insert({i, i * 10});
    }
    // data in Map
    cout << "In map" << endl;
    cout << "Key"
         << " "
         << "Value" << endl;
    for (auto i : M)
    {
        cout << i.first << "   " << i.second << endl;
    }

    // data in unordered map
    cout << "In unordered map" << endl;
    cout << "Key"
         << " "
         << "Value" << endl;
    for (auto i : UM)
    {
        cout << i.first << "   " << i.second << endl;
    }

    // data in multimap
    cout << "In multimap" << endl;
    cout << "Key"
         << " "
         << "Value" << endl;
    for (auto i : MM)
    {
        cout << i.first << "   " << i.second << endl;
    }

    // data in unordered multimap
    cout << "In unordered multimap" << endl;
    cout << "Key"
         << " "
         << "Value" << endl;
    for (auto i : UMM)
    {
        cout << i.first << "   " << i.second << endl;
    }
}

int main()
{
    typeMaps();
    return 0;
}