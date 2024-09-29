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

    void Heapify(int index)
    {
        int largest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if(left < size && arr[left] > arr[largest]){
            largest = left;
        }
        if(right < size && arr[right] > arr[largest]){
            largest = right;
        }
         if (largest != index) {
            swap(arr[index], arr[largest]);
            Heapify(largest);  // Recursively heapify the affected subtree
        }
    }

    void Delete(){
        if(size == 0)
        {
            cout << " Stack underflow";
            return;
        }

        arr[0] = arr[size - 1];
        size --;
        if(size == 0){
            return ;
        }

        Heapify(0);
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

    H1.Delete();
    cout << endl;
    H1.Print();
}