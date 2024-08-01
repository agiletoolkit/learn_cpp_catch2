#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int calculateRectangleArea(int length, int width) {
    return length * width;
}


void fizzBuzz(int n) {
    char buffer[10];  // Adjust the size as needed
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            sprintf(buffer, "FizzBuzz");
        } else if (i % 3 == 0) {
            sprintf(buffer, "Fizz");
        } else if (i % 5 == 0) {
            sprintf(buffer, "Buzz");
        } else {
            sprintf(buffer, "%d", i);
        }
        std::cout << buffer << std::endl;
    }
}


