#include <iostream>
using namespace std;

class Pattern {
public:
    void print(int n) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {
    Pattern p;
    p.print(5);
}