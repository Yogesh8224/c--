#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i < n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n; // n-j+1 for reverse printing
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}