#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
only unique value is stored
stores values in sorted order
Insertion, Deletion, and searching ooperations have logirithmic time
(O(log(n))), making them fast for most usecases
generrally implemented using red black tree
we can sort it in descending order sing greater<type>
*/
class person{
    public:
    string name;
    int age;

    bool operator < (const person &other) const{
        return age < other.age;
    }
};

int main()
 {
    set<int> S;
    // descending order
    // set<int, greater<int> > S;
    S.insert(10);
    S.insert(20);
    S.insert(30);
    S.insert(20);
    S.insert(40);
    S.insert(60);
    S.insert(50);
    // delete
    S.erase(20);

    for(auto it = S.begin(); it != S.end(); it++){
        cout << *it << " " << endl;
    }

    // searching an element
// find function - return the iterator of that number

    // if(S.find(0) != S.end()){
    //     cout << "present";
    // }
    // else{
    //     cout << "absent"; 
    // }

// count function - count the number

    if(S.count(20)){
        cout << "present";
    }
    else{
        cout << "absent"; 
    }

    set<person> s;
    person p, p1, p2;
    p.age = 19;
    p.name = "kajal";
    p1.age = 18;
    p1.name = "kjl";
    p2.age = 10;
    p2.name = "kaj";

    s.insert(p1);
    s.insert(p);
    s.insert(p2);

    for(auto it = s.begin(); it != s.end(); it++){
        cout << it -> age << " " << it -> name << endl; 
    }

 }