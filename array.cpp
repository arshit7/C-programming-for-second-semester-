#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10,20,30,40,50};
    int n = 5;

    cout << "Original: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    // Insert at position 2
    int pos = 2, val = 25;
    for(int i=n;i>pos;i--)
        arr[i] = arr[i-1];
    arr[pos] = val;
    n++;

    cout << "\nAfter Insertion: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    // Delete position 3
    pos = 3;
    for(int i=pos;i<n-1;i++)
        arr[i] = arr[i+1];
    n--;

    cout << "\nAfter Deletion: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}