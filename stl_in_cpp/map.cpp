#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
it stores data in key-value pair
it uses red-balck tree
Insertion, Deletion, and search operations have logirithmic time complexity making it fast for most use cases
example searching username and password in instagram
*/

int main()
{
    map<int, int> m;
    m.insert(make_pair(20,30));
    m.insert(make_pair(40,320));
    m.insert(make_pair(60,310));
    m.insert(make_pair(50,300));
    m.insert(make_pair(90,309));
    m[100] = 200;

    for(auto it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
}