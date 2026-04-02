#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;   // pure virtual
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Circle c;
    c.draw();

    return 0;
}