// Numbers of 1 Bits

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        // Checking last bit
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    cout << count;
}

/*  Output
000000000000001011
8
*/