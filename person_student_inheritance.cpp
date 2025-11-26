#include<iostream>
using namespace std;

class Person {
protected:
    int age;
    string name;

public:
    // Parameterized constructor of base class
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
    int rollNo;
    string department;

public:
    // Parameterized constructor of derived class
    Student(string n, int a, int r, string dept) 
        : Person(n, a)   // calling base class constructor
    {
        rollNo = r;
        department = dept;
    }

    void display() {
        // print Person data
        Person::display();

        // print Student data
        cout << "Roll No: " << rollNo << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student s1("Faryal", 20, 25, "Computer Science");
    s1.display();

    return 0;
}
