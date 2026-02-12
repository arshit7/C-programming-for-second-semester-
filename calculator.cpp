// WAP to calculate simple interest using class
#include <iostream>
using namespace std;

class Interest
{
private:
    float principal, rate, time, si;

public:
    void input()
    {
        cout << "Enter Principal Amount: ";
        cin >> principal;

        cout << "Enter Rate of Interest: ";
        cin >> rate;

        cout << "Enter Time (in years): ";
        cin >> time;
    }

    void calculate()
    {
        si = (principal * rate * time) / 100;
    }

    void display()
    {
        cout << "Simple Interest = " << si << endl;
    }
};

int main()
{
    Interest obj;
    obj.input();
    obj.calculate();
    obj.display();

    return 0;
}
