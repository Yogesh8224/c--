#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[] = "Hello, World!";
    cout << "Original string: " << str << endl;

    char* start = str;
    char* end = str + strlen(str) - 1;

    while (start < end) {
        swap(*start, *end);
        start++;
        end--;
    }

    cout << "Reversed string: " << str << endl;

    return 0;
}
