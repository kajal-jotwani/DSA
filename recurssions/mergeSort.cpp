#include <iostream>
using namespace std;

// merge 2 subarrays of an array
void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    // length of first subarray = arr[begin...mid]
    int len1 = mid - s + 1;
    // length of second subarray = arr[mid+1...end]
    int len2 = e - mid;

    // creating temp arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // copying data to temp arrays first[] and second[]
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[s + i];
    }

    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mid + 1 + i];
    }

    // merge the 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    int mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] <= second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // copy the remaining elements from first[] if any
    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    // copy the remaining elements from second[] if any
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    // free allocated memory
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;
    // left sort
    mergeSort(arr, s, mid);
    // right sort
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main()
{
    int arr[8] = {2, 9, 3, 5, 8, 3, 5, 0};
    int n = 8;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
