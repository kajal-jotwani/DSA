#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

void insertionsort(int arr[], int n)
{
    for(int i=0; i<n; i++){
        int key=arr[i];
        int j;
        for( j=i-1; j>=0; j--){
            if(arr[j]>key){
                arr[j+1]=arr[j];
            }
           else{
            break;
           }

        }
        arr[j+1]=key;
        
    }
}

void printarray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}

 int main()
{
    int arr[]={22,4,34,1,8,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
     printarray(arr,n);
     
}