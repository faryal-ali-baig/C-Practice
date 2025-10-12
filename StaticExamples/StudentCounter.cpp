#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    static int count;  // static data member to count total students

public:
    // Parameterized constructor
    Student(string n, int r) {
        name = n;
        rollNo = r;
        count++;
    }

    // Function to display student details
    void getData() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }

    // Static function to show total students
    static void getCount() {
        cout << "Total number of students: " << count << endl;
    }
};

// Initializing static data member
int Student::count = 0;

int main() {
    Student s1("Faryal", 30);
    s1.getData();

    Student s2("Ali", 17);
    s2.getData();

    // Display total student count using static function
    Student::getCount();

    return 0;
}
