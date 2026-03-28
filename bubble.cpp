#include <iostream>
using namespace std;

int main() {
    int arr[5] = {40,10,30,20,50};

    // Sort
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            if(arr[j] > arr[j+1]){
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }

    cout << "Sorted: ";
    for(int i=0;i<5;i++) cout<<arr[i]<<" ";

    // Search
    int key = 30, found = 0;
    for(int i=0;i<5;i++){
        if(arr[i] == key){
            cout << "\nFound at index " << i;
            found = 1;
        }
    }
    if(!found) cout << "\nNot found";
}