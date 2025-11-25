#include<iostream>
using namespace std;

class box {
    int dimension;

public:
    box() {
        dimension = 3;
    }

    box(const box &obj) {
        dimension = obj.dimension;
        cout << "Copy constructor is created" << endl;
    }

    void display() {
        cout << "Dimension = " << dimension << endl;
    }
};

int main() {
    box b1;
    b1.display();

    box b2(b1);
    b2.display();

    return 0;
}
