#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int bin[10], i=0;

    while(n){
        bin[i++] = n % 2;
        n /= 2;
    }

    for(int j=i-1;j>=0;j--)
        cout << bin[j];
}