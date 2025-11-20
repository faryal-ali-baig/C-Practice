#include<iostream>
#include<string>
using namespace std;

class book {
public:
    string title;
    string author;
    int price;

    void getData() {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter author: ";
        cin >> author;
        cout << "Enter price: ";
        cin >> price;
    }

    void display() {
        if (price > 500) {
            cout << "Title = " << title << endl;
            cout << "Author = " << author << endl;
            cout << "Price = " << price << endl;
        } else {
            cout << "Below range" << endl;
        }
    }
};

int main() {
    book b[5];

    for(int i=0; i<5; i++) {
        cout << "\nEnter details of book " << i+1 << endl;
        b[i].getData();
    }

    cout << "\nBooks with price above 500:\n";
    for(int i=0; i<5; i++) {
        b[i].display();
    }

    return 0;
}
