#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

void selectionsort(int arr[],int n)
{
    for(int i=0; i<n-1; i++){
        int minindex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[minindex], arr[i]);
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
    selectionsort(arr,n);
     printarray(arr,n);
     
}