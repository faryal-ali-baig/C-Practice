// PassByReference.cpp
// Topic: Pass-by-reference in C++
// Author: Faryal
// Created: 2025-09-12
//
// Compile:
//   g++ Functions/PassByReference.cpp -o PassByReference
// Run (Linux/macOS):
//   ./PassByReference
// Run (Windows / Dev C++):
//   run from IDE or open the produced .exe

#include <iostream>
#include <limits>
using namespace std;

void change(int &x) {
    x = 100;  // changes the original variable
}

int main() {
    int a = 5;          // original variable
    change(a);          // pass by reference
    cout << "Value of a after function call: " << a << endl;  // prints 100

    cout << "Press Enter to exit...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
    return 0;
}
