#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int Arr[8] = {7, 3, 9, 5, 6, 2, 8, 5};

    insertionSort(Arr, 8);
    for (int i = 0; i < 9; i++)
    {
        cout << Arr[i] << " ";
    }
}