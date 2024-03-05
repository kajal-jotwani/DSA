#include<iostream>
using namespace std;
//  Given an array of integers nums sorted in non-decreasing order,
//  find the starting and ending position of a given target value.
//  If target is not found in the array, return [-1, -1].


int binaryserch( int array[], int size, int key){

int start = 0;
int end = size-1;

int mid = (start + end)/2;

for (int i = 0; i < size; i++){
    
    if(array[mid] == key){
        return mid;
    }

    else if(key > array[mid]){
         start = mid+1;
    }

    else if(key < array[mid]){
         end = mid-1;
    }

    mid = (start+end)/2;
}



}

int main()
{
  
    int odd[7] = {1,3,5,7,9,19,13};

    int index = binaryserch( odd, 7 ,9 );

    cout<< "index of 9 is"<< index << endl;
}