#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// it uses hashing technique to achieve the constant time complexity which is also its usp
int main()
{
    unordered_set<int> set;
    set.insert(2);
    set.insert(0);
    set.insert(3);
    set.insert(10);
    set.insert(6);

    for(auto it = set.begin(); it != set.end(); it++){
        cout << *it << " " ;
    }
}