#include <iostream>
using namespace std;

class Test {
    int x;

public:
    Test() { x = 0; }
    Test(int a) { x = a; }
    Test(const Test &t) { x = t.x; }

    void show() { cout<<x<<endl; }
};

int main(){
    Test t1(5);
    Test t2(t1);
    t1.show();
    t2.show();
}