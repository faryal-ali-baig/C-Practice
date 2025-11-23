#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;
    int height;

public:
    void setData() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter height: ";
        cin >> height;
    }

    // Declare Display as friend class
    friend class Display;
};

class Display {
public:
    void showVolume(Box obj) {
        int volume = obj.length * obj.width * obj.height;
        cout << "The volume of the box is: " << volume << endl;
    }
};

int main() {
    Box b1;
    b1.setData();

    Display d1;
    d1.showVolume(b1);

    return 0;
}
