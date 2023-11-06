#include <iostream>
using namespace std;

void printingarray(int arr[], int size)
{
    cout<< " printing the array" << endl;
    for (int i= 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "printing done" << endl;
}

int main()
{
    int num[15];
    cout << "value at 14 index is " << num[14];
}