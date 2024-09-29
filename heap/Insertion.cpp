#include<iostream>
using namespace std;

class MaxHeap{
    int *arr;
    int size;
    int total_size;

    public:

    MaxHeap(int n)
    {
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    void Insert(int value){
        if(size == total_size){
            cout << "Heap overflow" << endl;
            return;
        }

        arr[size] = value;
        int index = size;
        size++;

        while(index > 0 && arr[index] > arr[(index - 1) / 2])
        {
            swap(arr[index], arr[(index - 1) / 2]);
            index = (index -1) / 2;
        }
        
    }

    void Print(){
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
    }
};

int main() 
{
    MaxHeap H1(6);
    H1.Insert(4);
    H1.Insert(40);
    H1.Insert(35);
    H1.Insert(45);
    H1.Insert(10);
    H1.Insert(2);

    H1.Print();
}