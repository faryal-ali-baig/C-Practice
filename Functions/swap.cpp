#include <iostream>
using namespace std;

/*
    Title   : Pass by Value vs Pass by Reference (Swap Example)
    Author  : Faryal
    Purpose : Demonstrates the difference between Pass by Value and Pass by Reference
              by swapping two numbers.
*/

// Function: swapValue
// Purpose : Tries to swap two numbers using Pass by Value.
//           Only local copies are swapped, original variables remain unchanged.
void swapValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

// Function: swapReference
// Purpose : Swaps two numbers using Pass by Reference.
//           Since references are aliases of original variables, the real values are swapped.
void swapReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 5, b = 10;

    cout << "Before swapValue: a = " << a << ", b = " << b << endl;
    swapValue(a, b);
    cout << "After swapValue : a = " << a << ", b = " << b << endl;

    cout << endl;

    cout << "Before swapReference: a = " << a << ", b = " << b << endl;
    swapReference(a, b);
    cout << "After swapReference : a = " << a << ", b = " << b << endl;

    system("pause"); // Keeps console open (Windows only)
    return 0;
}
