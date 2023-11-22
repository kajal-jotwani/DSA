#include<iostream>
using namespace std;

void printarr(int arr[], int n)
{
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


 void sortOne (int arr[], int n){
      int i =0, j=n-1;

      while(i < j)
      {
         while(arr[i]==0){
            i++;
         }

         while(arr[j]==1)
         {
            j--;
         }

         swap(arr[i], arr[j]);
         i++;
         j--;
      }
 }


int main(){

    int arr[8]={ 1,1,0,1,0,0,0,1};

    sortOne(arr,8);
    printarr(arr,8);

    return 0;
}