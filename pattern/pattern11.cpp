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
        char a = ('A' + i - 1);
        while (j <= i)
        {
            cout << a;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
/* OUTPUT
5
A
BB
CCC
DDDD
EEEEE*/
