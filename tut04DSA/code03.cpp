#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter an number : ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << i << endl;
    }
}

/*
int i = 1;
for (; ; ){
    if (i <= n){
        cout << i << endl;
    }
    else {
        break;
    }
    i++;

    for (int a = 0, b = 1, c = 2; a >= 0 && b >= 1 && c >= 2; a--, b--, c--)
{
    cout << a << " " << b << " " << c << " ";
}
}
*/