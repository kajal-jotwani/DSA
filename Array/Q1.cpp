#include<iostream>
using namespace std;

void reverse(int arr[] , int m , int n){
    
     int start=m+1;
    int end=n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[6]={2, 4, 5, 8, 9, 7};

    reverse (arr, 3, 6) ;

    printArray(arr, 6);
}

