#include<iostream>
using namespace std;

class Demo {
    int object;

public:
    Demo() {
        object = 0;
        cout << "Constructor called" << endl;
        cout << "Object is created" << endl;
    }

    ~Demo() {
        cout << "Destructor called" << endl;
        cout << "Object is destroyed" << endl;
    }
};

int main() {
    Demo d1;  // Constructor called here
    return 0; // Destructor called automatically when d1 goes out of scope
}
