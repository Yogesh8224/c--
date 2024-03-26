#include <iostream>

unsigned long long factorial(int n) {
    return (n == 0) ? 1 : static_cast<unsigned long long>(n) * factorial(n - 1);
}

int main() {
    int n;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        std::cout << "Factorial of " << n << " is " << factorial(n) << std::endl;
    }

    return 0;
}
