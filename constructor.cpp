// copy cunstructor 
#include <iostream>
using namespace std;

class cpp {
    int roll;
    string name;
public: 
    cpp () {
        roll = 0;
        name = "unknown ";
        cout << " default contructor called "<< endl;

} 
    cpp (int r, string n) {
        roll = r;
        name = n;
        cout << " parameterized contructor called "<< endl ;

    }
    cpp (const cpp &c) {
        roll = c.roll;
        name = c.name;
        cout << " copy contructor called "<< endl ;
    }
    void display() {
        cout << " roll no: " << roll << endl;
        cout << " name: " << name << endl;
    }
};

int main() {
    cpp c1; // default constructor
    c1.display();

    cpp c2(1, "John"); // parameterized constructor
    c2.display();

    cpp c3(c2); // copy constructor
    c3.display();

    return 0;
}

