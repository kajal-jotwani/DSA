#include<iostream>
#include<queue>
using namespace std;

int main() 
{
    queue<int> q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);


    int n = q.size();
    while(n--)
    {
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
}
