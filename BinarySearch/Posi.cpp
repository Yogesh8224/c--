#include <iostream>
using namespace std;

    int peakIndexInMountainArray(int arr[]) {
        int s = 0; // Initialize the start pointer to 0
        int e = arr.size(); // Initialize the end pointer to the size of the array

        int mid = s + (e - s) / 2; // Calculate the middle index

        while (s < e) { // Start a binary search loop
            if (arr[mid] < arr[mid + 1]) { // If the middle element is less than the next element
                s = mid + 1; // Update the start pointer to mid + 1
            } else {
                e = mid; // Otherwise, update the end pointer to mid
            }
            mid = s + (e - s) / 2; // Recalculate the middle index
        }
        return s; // Return the start pointer as the peak index
    }

int main()
{
    
}