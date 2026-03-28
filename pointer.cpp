#include <iostream>
using namespace std;

int main() {
    int x=10;
    int *p=&x;

    cout<<"Value: "<<*p<<endl;
    cout<<"Address: "<<p;
}