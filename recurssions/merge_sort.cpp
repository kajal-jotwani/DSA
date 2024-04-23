#include<iostream>
using namespace std;

// merge 2 subarrays of an array
void merge(int *arr, int s, int e){
    
    int mid = s + ( e -s )/2;
// length of first subaaray = arr[begin...mid]
    int len1 = mid-s+1;
// length of second subaaray = arr[mid...end]
    int len2 = e-mid;
// cresating temp arrays 
    int *first = new int[len1];
    int *second = new int[len2];

// copying data to temp arrays first[] and second[]
    int mainArrayIndex = s;
    for(int i = 0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }

     mainArrayIndex = s;
    for(int i = 0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    // merge the 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1<len1 && index2<len2){
        if(first[index1]<=second[index2])
        arr[mainArrayIndex++] = first[index1++];

        else{
        arr[mainArrayIndex++] = second[index1++];  
        }

    // copy the left elements
        while(index1<len1){
            arr[mainArrayIndex++] = first[index1++];
        }

         while(index2<len2){
            arr[mainArrayIndex++] = second[index1++];
        }
    } 
    delete[] first; 
    delete[] second; 
}


void mergeSort(int *arr, int s, int e){

    if(s>=e)
    return;

    int mid = s + ( e -s )/2;
    // left sort
    mergeSort(arr , s, mid);
    // right sort
    mergeSort(arr , mid+1, e);

    merge(arr, s, e);
}

int main(){
    int arr[8] = {2,9,3,5,8,3,5,0};
    int n = 8;

    mergeSort(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}