#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    // char a = 'A';
    while (i < n)
    {
        int j = 1;
        while (j <= n)
        {
            char a = 'A' + i + j - 2;
            cout << a;
            a = a + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

/* OUTPUT
5
ABCDE
BCDEF
CDEFG
DEFGH
*/