#include<iostream>
using namespace std;


 void print(int arr[], int index)
 {
    if(index == -1)
    return;

    cout<<arr[index]<<" ";
    print(arr,index-1);
    // cout<<arr[index]<<" ";
 }

int main(){
    int arr[] = {3,4,1,2,0};
    print(arr,4);
}