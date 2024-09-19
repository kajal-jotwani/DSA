#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    list<int> lst;
    lst.push_back(30);
    lst.push_back(40);
    lst.push_back(50);
    lst.push_back(60);
    lst.push_front(20);
    // lst.pop_front();
    // lst.pop_back();

    cout << lst.front() << " " << lst.back() << endl;
    cout << "size of list is : " << lst.size() << endl;

    for(auto it = lst.begin(); it != lst.end(); it++){
        cout << *it << " ";
    }
}