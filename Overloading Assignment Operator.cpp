#include <iostream>
using namespace std;

class Test {
    int x;
public:
    Test(int a) { x = a; }

    void operator=(Test t) {
        x = t.x;
    }

    void display() {
        cout << x;
    }
};

int main() {
    Test t1(5), t2(10);
    t1 = t2;
    t1.display();
}