#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<string, int> p;
    // two methods

    p = make_pair("kajal", 19);
    cout << p.first << " " << p.second << endl;
    p.first = "hello";
    p.second = 18;
    cout << p.first << " " << p.second << endl;

    // name age height

    pair<string, pair<int, int>> pr;
    pr.first = "kajal";
    pr.second.first = 19;
    pr.second.second = 156;
    cout << pr.first << " " << pr.second.first << " "<< pr.second.second << endl;
}