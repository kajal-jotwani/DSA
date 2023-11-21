#include <iostream>
using namespace std;

int printarray(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int swapAlternate(int arr[], int size)
{
    for(int i=0; i<size; i+=2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}


int main()
{
    int even[8]={2,5,6,3,7,9,8,0};
    int odd[5]={44, 5, 61, 91, 2};

    swapAlternate(even,8);
    printarray(even,8);
    return 0;

}