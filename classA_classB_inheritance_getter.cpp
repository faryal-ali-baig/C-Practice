#include<iostream>
using namespace std;

class A {
private:
    int x;     // private member

public:
    A(int a) {
        x = a;
    }

    int getX() {   // public getter
        return x;
    }
};

class B : public A {
    int y;

public:
    B(int a, int b) : A(a) {   // calling A's constructor
        y = b;
    }

    void display() {
        cout << "x = " << getX() << endl;   // accessing private member using function
        cout << "y = " << y << endl;
    }
};

int main() {
    B obj(10, 20);
    obj.display();
    return 0;
}
