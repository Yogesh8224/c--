#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int decimal, binary = 0, remainder, product = 1;
  // Since the data type is int, it can only accept values up to 1023 before switching to long.
  cout << "Enter the number to convert: ";
  cin >> decimal;
  while (decimal != 0) {
    remainder = decimal % 2;
    binary += remainder * product;
    product *= 10;
    decimal /= 2;
  }
  cout << "The binary equivalent of " << decimal << " is " << binary << endl;

  // Convert the binary number back to decimal.
  int decimal2 = 0, count = 0, temp = binary;
  while (temp != 0) {
    remainder = temp % 10;
    decimal2 += remainder * pow(2, count);
    count++;
    temp /= 10;
  }
  cout << "The decimal equivalent of " << binary << " is " << decimal2 << endl;

  return 0;
}
