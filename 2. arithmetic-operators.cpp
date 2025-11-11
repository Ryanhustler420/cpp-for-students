#include <iostream>

using namespace std;

int main() {

    int a = 2;
    int b = 3;

    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    int qoutient = a / b;
    float q2 = float(a) / float(b);
    int reminder = a % b;
    
    int x = 5;
    int y = ++a; // x = 6, y = 6
    int z = a++; // x = 7, z = 6

    int x1 = 5;
    int y1 = --x1; // x1 = 4, y1 = 4
    int z1 = x1--; // x1 = 3, z1 = 4

    return 0;
}