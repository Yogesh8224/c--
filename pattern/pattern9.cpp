#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    char a = 'A';
    while (i < n)
    {
        int j = 1;

        while (j <= n)
        {
            cout << a;
            a = a + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

//  OUTPUT
/*6
ABCDEF
GHIJKL
MNOPQR
STUVWX
YZ[\]^*/