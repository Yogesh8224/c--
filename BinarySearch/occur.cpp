#include <iostream>
using namespace std;

int firstOccu(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (s - e) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int LastOccu(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (s - e) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int even[7] = {1, 2, 3, 3, 3, 3, 4};
    int a = firstOccu(even, 7, 3);
    int b = LastOccu(even, 7, 3);
    cout << a << b << endl;

    cout << "First ocuurence of 3 at " << firstOccu(even, 7, 3) << endl;
    cout << "Last ocuurence of 3 at " << LastOccu(even, 7, 3) << endl;

    int TotalOccurence = b - a + 1;
    cout << "Total Ocuurence of 3 is : " << TotalOccurence;

    return 0;
}