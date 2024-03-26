#include <iostream>
using namespace std;

void Sorted(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

int main()
{
    int Unsort[8] = {8, 2, 6, 9, 3, 1, 4, 7};

    Sorted(Unsort, 8);

    for (int i = 0; i < 8; i++)
    {
        cout << Unsort[i] << " ";
    }
}