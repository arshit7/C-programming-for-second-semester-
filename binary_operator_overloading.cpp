#include <iostream>
using namespace std;

class Add {
    int x;
public:
    Add(int a) { x = a; }

    Add operator+(Add obj) {
        return Add(x + obj.x);
    }

    void display() {
        cout << x;
    }
};

int main() {
    Add a1(10), a2(20);
    Add a3 = a1 + a2;
    a3.display();
}