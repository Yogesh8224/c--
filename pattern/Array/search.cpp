#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {1, 4, 2, 9, 2, 8, 6, 7, 20, -2};
    cout << "Enter the element to search for " << endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << "Key is absent";
    }
}