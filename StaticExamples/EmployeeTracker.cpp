#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    float salary;
    static int employeeCount;  // static variable to count total employees

public:
    // Parameterized constructor
    Employee(string n, float s) {
        name = n;
        salary = s;
        employeeCount++;
    }

    // Function to display employee details
    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }

    // Static function to show total employee count
    static void getEmployeeCount() {
        cout << "Total Employees: " << employeeCount << endl;
    }
};

// Initialize static data member
int Employee::employeeCount = 0;

int main() {
    Employee e1("Faryal", 50000);
    e1.display();

    Employee e2("Ali", 60000);
    e2.display();

    // Call static function to show employee count
    Employee::getEmployeeCount();

    return 0;
}
