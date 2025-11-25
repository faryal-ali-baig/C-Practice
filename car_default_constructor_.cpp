#include<iostream>
#include<string>
using namespace std;

class car {
    string brand;
    string model;

public:
    car() {
        brand = "Toyota";
        model = "Corolla";
    }

    void display() {
        cout << "Brand = " << brand << endl;
        cout << "Model = " << model << endl;
    }
};

int main() {
    car c1;
    c1.display();
    return 0;
}
