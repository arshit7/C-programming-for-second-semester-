#include <iostream>
using namespace std;

class test {
int x=10 ;
double y = 10;
public:
 void sum(int a)
 {
        cout<<"Sum of 1 integer: "<<a+x<<endl;
 }
 void sum(double b)
 {
        cout<<"Sum of 1 double: "<<b+y<<endl;
 }
void sum(int c , int d)
 {
        cout<<"Sum of 2 integers: "<<c+x<<" and "<<d+y<<endl;
 }
};

int main() {
    test t;

    t.sum(2);
    t.sum(5.5);
    t.sum(8, 10)    ;

    return 0;
}