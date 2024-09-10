#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(2);
    q.push(8);
    // q.pop();
    cout << endl <<q.front();
    cout << endl << q.size();
}