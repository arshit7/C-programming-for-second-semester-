#include <iostream>
#include <map>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3};
    map<int, int> freq;

    for(int i = 0; i < 6; i++) {
        freq[arr[i]]++;
    }

    for(auto x : freq) {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}