#include <iostream>
#include <map>
using namespace std;

int main() {
    int arr[] = {2,7,11,15}, target = 9;
    map<int,int> m;

    for (int i=0;i<4;i++) {
        int diff = target - arr[i];
        if (m.count(diff)) {
            cout << m[diff] << " " << i;
            return 0;
        }
        m[arr[i]] = i;
    }
}