#include <iostream>
using namespace std;

int main() {
    int arr[50] = {10, 20, 30, 40, 50};
    int n = 5;   // current size

    // Traversal
    cout << "Array elements: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Insertion at position 2 (index 1)
    int pos = 1, value = 15;
    for(int i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = value;
    n++;

    cout << "After insertion: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Deletion at position 3 (index 2)
    pos = 2;
    for(int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    cout << "After deletion: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}