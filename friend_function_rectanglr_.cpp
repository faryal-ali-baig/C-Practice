#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    void setData() {
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the width: ";
        cin >> width;
    }

    friend int calculateArea(Rectangle r);
};

int calculateArea(Rectangle r) {
    int area;
    area = r.length * r.width;
    return area;
}

int main() {
    Rectangle r1;
    r1.setData();

    cout << "The area of rectangle is " << calculateArea(r1) << endl;

    return 0;
}
