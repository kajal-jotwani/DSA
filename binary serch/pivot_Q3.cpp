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
        int array[5]={3,8,10,17,1};

       cout<<"pivot is"<<pivot(array,5)<<endl;
    }
