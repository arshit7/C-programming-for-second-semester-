#include <iostream>
using namespace std;

int main() {
    string str = "hello";

    cout << "Original: " << str << endl;

    int n = str.length();
    for(int i=n-1;i>=0;i--){
        cout << str[i];
    }
}