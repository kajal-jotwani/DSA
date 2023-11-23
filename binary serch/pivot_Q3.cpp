#include<iostream>
using namespace std;

int pivot(int arr[], int size){

    int s=0;
    int e=size-1;
    int mid= (s+e)/2;

    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        
        }

        else
        {
            e=mid;
        
        }
         mid= (s+e)/2;
    }
       return s;
}


int main()
    {
        int array[6]={1,7,3,6,5,6};

       cout<<"pivot is"<<pivot(array,6)<<endl;
    }
