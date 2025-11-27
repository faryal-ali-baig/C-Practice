#include<iostream>
using namespace std;

class Base {
public:
    int id;   // public member

    Base(int x) {
        id = x;
    }

    void showId() {
        cout << "ID: " << id << endl;
    }
};

class Derived : public Base {
    string name;

public:
    Derived(int x, string n) : Base(x) {
        name = n;
    }

    void print() {
        showId();   // calling base class function
        cout << "Name: " << name << endl;
    }
};

int main() {
    Derived d1(101, "Faryal");
    d1.print();
    return 0;
}
