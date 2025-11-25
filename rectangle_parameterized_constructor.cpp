#include<iostream>
using namespace std;

class rectangle {
    int length;
    int width;

public:
    rectangle(int l, int w) {
        length = l;
        width = w;
    }

    void area() {
        int area = length * width;
        cout << "Area = " << area << endl;
    }
};

int main() {
    rectangle r1(4, 5);
    r1.area();   // function call
    return 0;
}
