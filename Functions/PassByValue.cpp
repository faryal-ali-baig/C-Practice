#include <iostream>
using namespace std;

/*
  PassByValue.cpp
  Topic: Pass-by-value in C++
  Author: Faryal
  Created: 2025-09-12

  Compile: g++ PassByValue.cpp -o PassByValue
  Run (Linux/Mac): ./PassByValue
  Run (Windows, Dev C++): run from IDE or ./PassByValue.exe
*/

void change(int x) {
    x = 100;  // only changes the local copy
}

int main() {
    int a = 5;          // original variable
    change(a);          // pass by value
    cout << "Value of a after function call: " << a << endl;  // prints 5

    // portable pause so program window doesn't close immediately:
    cout << "Press Enter to exit...";
    cin.get();
    return 0;
}
