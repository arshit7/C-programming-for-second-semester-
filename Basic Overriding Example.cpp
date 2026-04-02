#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Base* b;
    Derived d;

    b = &d;
    b->show();   // Runtime decision

    return 0;
}