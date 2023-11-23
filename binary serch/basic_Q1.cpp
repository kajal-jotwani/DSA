#include<iostream>
using namespace std;

int binaryserch( int array[], int size, int key){

int start = 0;
int end = size-1;

int mid = (start + end)/2;

while(start <= end){

    if(array[mid] == key){
        return mid;
    }

    if(key > array[mid]){
         start = mid+1;
    }

     if(key < array[mid]){
         end = mid-1;
    }

    mid = (start+end)/2;

}
return -1;

}

int main()
{
    int even[6] = {2,4,6,8,10,12};
    int odd[7] = {1,3,5,7,9,11,13};

    int index = binaryserch( even, 6 , 10);

    cout<< "index of 10 is"<< index << endl;
}