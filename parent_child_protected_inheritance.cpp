#include<iostream>
using namespace std;

class Parent {
protected:
    int a;   // protected → accessible in Child

public:
    Parent(int x) {
        a = x;
    }
};

class Child : public Parent {
    int b;

public:
    Child(int x, int y) : Parent(x) {
        b = y;
    }

    void show() {
        cout << "a = " << a << endl;   // direct access allowed
        cout << "b = " << b << endl;
    }
};

int main() {
    Child obj(5, 15);
    obj.show();
    return 0;
}
