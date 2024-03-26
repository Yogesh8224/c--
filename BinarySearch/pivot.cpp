#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0;                 // Initialize the start index to 0
    int e = n - 1;             // Initialize the end index to the last element's index (4 in this case)
    int mid = s + (e - s) / 2; // Calculate the middle index, which is initially 2

    while (s < e)  // This loop continues as long as the start index is less than the end index
    {
        if (arr[mid] >= arr[0])  // Check if the middle element is greater than or equal to the first element
        {
            s = mid + 1;        // If true, update the start index to mid + 1
        }
        else
        {
            e = mid;            // If false, update the end index to mid
        }
        mid = s + (e - s) / 2;   // Recalculate the middle index based on the updated start and end
    }
    return s;  // When the loop exits, the start index 's' represents the index of the pivot element
}

int main()
{
    int arr[5] = {3, 8, 10, 1, 2};
    cout << "Pivot is " << getPivot(arr, 5);
}
