#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter an number for fibonacci series : " << endl;
    cin >> n;
    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i <= n; i++)
    {
        int nextNum = a + b;
        cout << nextNum << " ";

        a = b;
        b = nextNum;
    }
}