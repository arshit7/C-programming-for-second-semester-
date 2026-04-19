#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a == b) cout << "Anagram";
    else cout << "Not Anagram";
}