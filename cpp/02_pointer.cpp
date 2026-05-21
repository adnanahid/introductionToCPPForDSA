//! 1. Pointer (পয়েন্টার) কী?
// Pointer হলো এমন একটি variable যা অন্য একটি variable-এর memory address রাখে।

#include <iostream>
using namespace std;

int main() {
    int x = 10;  // normal variable
    int *p = &x; // pointer storing address of x

    cout << "Memory address of x is: " << p << '\n';
    cout << "Value stored at that address is: " << *p;

    return 0;
}