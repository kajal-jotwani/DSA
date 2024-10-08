#include <bits/stdc++.h>
using namespace std;

// Function to merge two sorted halves
void Merge(vector<int> &arr, int low, int mid, int high) {
    int left = low;
    int right = mid + 1;
    vector<int> temp; // Temporary vector to store the merged result

    // Merging the two halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copying remaining elements from the left half
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copying remaining elements from the right half
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copying back the merged elements to the original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low]; // Adjust the index for temp
    }
}

// Recursive function to sort the array using merge sort
void mergesort(vector<int> &arr, int low, int high) {
    if (low >= high) { // Base case: subarray has 1 or 0 elements
        return;
    }
    int mid = (high + low) / 2;

    // Recursively divide the array into two halves
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);

    // Merge the sorted halves
    Merge(arr, low, mid, high);
}

// Function to print the vector
void printVector(const vector<int> &arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int n = arr.size();

    cout << "Given vector is: \n";
    printVector(arr);

    // Call to merge sort
    mergesort(arr, 0, n - 1);

    cout << "\nSorted vector is: \n";
    printVector(arr);

    return 0;
}
