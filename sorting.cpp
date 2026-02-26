#include <iostream>
using namespace std;

int main() {
    int arr[5] = {40, 10, 30, 20, 50};
    int n = 5;

    // Linear Search
    int key = 30, found = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element found at index " << i << endl;
            found = 1;
            break;
        }
    }
    if(!found)
        cout << "Element not found\n";

    // Bubble Sort
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}