#include <iostream>
using namespace std;

class B;  // Forward declaration

class A {
private:
    int num;

public:
    void setData() {
        cout << "Enter a number: ";
        cin >> num;
    }

    // Declare only B's member function as friend (not whole class B)
    friend void B::show(A obj);
};

class B {
public:
    void show(A obj) {
        cout << "The value of num is: " << obj.num << endl;
    }
};

int main() {
    A a1;
    a1.setData();

    B b1;
    b1.show(a1);

    return 0;
}
