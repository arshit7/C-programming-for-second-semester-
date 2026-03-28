#include <iostream>
using namespace std;

class Demo {
public:
    void sum(int a, int b){
        cout<<"Sum: "<<a+b<<endl;
    }

    void sum(double a, double b){
        cout<<"Sum: "<<a+b<<endl;
    }
};

int main(){
    Demo d;
    d.sum(2,3);
    d.sum(2.5,3.5);
}