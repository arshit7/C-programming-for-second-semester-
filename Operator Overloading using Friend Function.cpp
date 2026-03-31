#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    Demo(int a) { x = a; }

    friend Demo operator+(Demo d1, Demo d2);

    void display() {
        cout << x;
    }
};

Demo operator+(Demo d1, Demo d2) {
    return Demo(d1.x + d2.x);
}

int main() {
    Demo d1(15), d2(25);
    Demo d3 = d1 + d2;
    d3.display();
}