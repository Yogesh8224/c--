#include <iostream>
using namespace std;

void Sorting(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i; // Assume the current index has the minimum value.

        // Find the index of the minimum element in the remaining unsorted part of the array.
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        // Swap the minimum element found with the current element (at index i).
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    int Sort[9] = {8, 3, 0, 2, 8, 4, 5, 6, 3};
    Sorting(Sort, 9);
    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < 9; i++)
    {
        cout << Sort[i] << " ";
    }

    return 0;
}
