#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char a = 'A' + n - i;
        while (j <= i)
        {
            cout << a;
            a = a + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
/* OUTPUT
4
D
CD
BCD
ABCD*/
