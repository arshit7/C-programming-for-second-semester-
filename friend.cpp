#include <iostream>
using namespace std;

class Demo {
    int x;

public:
    Demo(int a){ x=a; }

    friend void show(Demo d);
};

void show(Demo d){
    cout<<"Value: "<<d.x;
}

int main(){
    Demo d(10);
    show(d);
}