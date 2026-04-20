#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    int l = 0, r = s.length() - 1;
    while (l < r) {
        if (s[l] != s[r])
            return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    if (isPalindrome(s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}