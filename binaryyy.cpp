#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10,20,30,40,50};
    int low = 0, high = 4, mid, key = 30;
    bool found = false;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            cout << "Found at index " << mid;
            found = true;
            break;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(!found) cout << "Not found";
}