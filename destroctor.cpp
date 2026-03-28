#include <iostream>
using namespace std;

class Demo {
public:
    Demo(){ cout<<"Constructor\n"; }
    ~Demo(){ cout<<"Destructor\n"; }
};

int main(){
    Demo d;
}