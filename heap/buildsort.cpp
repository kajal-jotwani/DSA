#include <bits/stdc++.h>
using namespace std;

void Heapify(int arr[], int index, int n) {
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }
    if (largest != index) {
        swap(arr[largest], arr[index]);
        Heapify(arr, largest, n);
    }
}

void BuildMaxHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        Heapify(arr, i, n);
    }
}

void SortArr(int arr[], int n) {
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);  // Move max element to the end
        Heapify(arr, 0, i);    // Heapify the reduced heap
    }
}

void Print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 3, 8, 13, 18, 41, 11, 45, 35, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    BuildMaxHeap(arr, n);  // Build the max heap
    SortArr(arr, n);       // Sort the array
    Print(arr, n);         // Print the sorted array

    return 0;
}
