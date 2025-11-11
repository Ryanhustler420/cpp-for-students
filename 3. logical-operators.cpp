#include <iostream>

using namespace std;

int main() {

    int a = 5, b = 10;
    if (a > 0 && b > 0) {
        cout << "Both values are positive.\n";
    }

    if (a > 0 || b > 0) {
        std::cout << "At least one value is positive.\n";
    }

    if (!(a < 0)) {
        std::cout << "The value is not negative.\n";
    }

    int a1 = 5, b1 = -10, c1 = 15;

    if (a1 > 0 && (b1 > 0 || c1 > 0)) {
        std::cout << "At least two values are positive.\n";
    }

    return 0;
}