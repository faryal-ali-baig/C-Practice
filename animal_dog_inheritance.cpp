#include<iostream>
using namespace std;

class Animal {
protected:
    string species;   // now Dog can access it
public:
    Animal() {
        species = "Unknown";
    }

    void display() {
        cout << "Species: " << species << endl;
    }
};

class Dog : public Animal {
    string breed;
public:
    Dog() {
        species = "Dog";                 // allowed because species is protected
        breed = "German Shepherd";
    }

    void display() {
        cout << "Species: " << species << endl;
        cout << "Breed: " << breed << endl;
    }
};

int main() {
    Dog d1;
    d1.display();
    return 0;
}
