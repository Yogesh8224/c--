#include <iostream>
using namespace std;

int findunique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[7] = {1, 2, 3, 2, 1, 3, 6};

    findunique(arr, 7);
}