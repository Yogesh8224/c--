// Subtract the product of the sum of Digits of an integer

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Product = 1;
    int sum = 0;

    while (n != 0)
    {
        int digit = n % 10;
        Product = Product * digit;
        sum = sum + digit;

        n = n / 10;
    }
    int answer = Product - sum;
    cout << answer;
}
