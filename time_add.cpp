#include<iostream>
using namespace std;

class time {
private:
    int hours;
    int minutes;

public:
    void getData(int h, int m) {
        hours = h;
        minutes = m;
    }

    void addtime(time t1, time t2) {
        hours = t1.hours + t2.hours;
        minutes = t1.minutes + t2.minutes;

        if(minutes >= 60) {
            hours += minutes / 60;
            minutes = minutes % 60;
        }
    }

    void display() {
        cout << "New Time = " << hours << ":" << minutes << endl;
    }
};

int main() {
    time t1, t2, t3;

    t1.getData(4,20);
    t2.getData(5,24);

    t3.addtime(t1, t2);
    t3.display();

    return 0;
}
