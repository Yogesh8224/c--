#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // Print space
    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // Print 1st triangle
        int j = 1;
        while (j <= row)
        {
            cout << j;
            j = j + 1;
        }

        // Print 2nd triangle
        int start = row - 1;
        while (start)
        {
            cout << start;
            start = start - 1;
        }
        cout << endl;
        row = row + 1;
    }
}

/* OUTPUT
6
     1
    121
   12321
  1234321
 123454321
12345654321
*/