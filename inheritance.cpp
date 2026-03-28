#include <iostream>
using namespace std;

class A {
public:
    void showA(){ cout<<"Class A\n"; }
};

class B {
public:
    void showB(){ cout<<"Class B\n"; }
};

class C: public A, public B {};

int main(){
    C obj;
    obj.showA();
    obj.showB();
}