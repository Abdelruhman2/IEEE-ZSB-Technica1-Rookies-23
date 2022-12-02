// C++ program for insertion sort

#include <bits/stdc++.h>
using namespace std;
/*Sorting algorithm is stable if for all indices i and j such that the key arr[i] equals key arr[j], if record
R[i] precedes record R[j] in the original file, record R[i] precedes record R[j] in the sorted list.*/



/*Worst case complexity: Θ(n^2)
Best case complexity: Θ(n)
Average case complexity: Θ(n^2)*/


// Auxiliary Space: O(1)


//Stable: Maintains relative order of input data if the keys are same
// Function to sort an array using
// insertion sort
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1],
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// A utility function to print an array
// of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {4 , 13 , 8 , 9 , 7};
    int N = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, N);
    printArray(arr, N);

    return 0;
}
// This is code is contributed by rathbhupendra
