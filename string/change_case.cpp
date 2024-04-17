#include<iostream>
using namespace std;

void lowToUp(string &str, int index){

    if(index == -1)
    return;

    str[index] = 'A'+ str[index] -'a';
    lowToUp(str, index-1);
}

int main(){

    string str = "kajal";
    lowToUp(str,4);
    cout<<str;
}