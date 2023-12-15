#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

void bubblesort(int arr[], int n){
    bool swapped=false;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                 swap(arr[j],arr[i]);
                 swapped=true;
            }
        }
        if (swapped==false){
            break;
        }
        
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
    bubblesort(arr,n);
     printarray(arr,n);
     
}