#include <iostream>
using namespace std;

class Test {
public:
    static int count;

    Test(){
        count++;
    }
};

int Test::count = 0;

int main(){
    Test t1,t2,t3;
    cout<<"Objects: "<<Test::count;
}