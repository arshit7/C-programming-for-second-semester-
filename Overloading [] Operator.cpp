#include <iostream>
using namespace std;

class Array {
    int arr[5];
public:
    Array() {
        for(int i = 0; i < 5; i++) arr[i] = i * 10;
    }

    int operator[](int index) {
        return arr[index];
    }
};

int main() {
    Array a;
    cout << a[2];
}