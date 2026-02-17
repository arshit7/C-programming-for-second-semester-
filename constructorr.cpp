#include <iostream>
using namespace std;

class constructor
{
public:
    

    constructor()
    {
        cout << "Default Constructor Called" << endl;
    }

   
    constructor(int a)
    {
        cout << "Parameterized Constructor Called" << endl;
        cout << "Value is: " << a << endl;
    }


    constructor(const constructor &obj)
    {
        
    }
};

int main()
{
    constructor obj1;       
    constructor obj2(5);     
    constructor obj3(obj2);  

    return 0;
}