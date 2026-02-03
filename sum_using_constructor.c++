#include <iostream>
using namespace std;

class test {
public:
    int x, y;

    test() {
        cout << "Enter x and y: ";
        cin >> x >> y;
    }
};

int main() {
    int sum;
    test t1;

    sum = t1.x + t1.y;
    cout << "Sum is: " << sum << endl;

    return 0;
}
