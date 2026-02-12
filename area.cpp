// WAP to calculate area of rectangle using class
#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, width, area;

public:
    void input()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;
    }

    void calculate()
    {
        area = length * width;
    }

    void display()
    {
        cout << "Area of Rectangle = " << area << endl;
    }
};

int main()
{
    Rectangle r;
    r.input();
    r.calculate();
    r.display();

    return 0;
}
