#include<iostream>
using namespace std;

bool serch(int arr[], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10]={2, 4, 6, -3, 8, -10, 20, 1, -2, 12};

cout<<"enter the element to serch for"<<endl;
int key;
cin>>key;

bool found= serch(arr, 10, key);

if(found){
    cout<<"key is present"<<endl;
}
    else{
        cout<<"key is absent"<<endl; 
    }
}

