#include <iostream>
using namespace std;

int main(){
    int n=3;
    int *arr = new int[n];

    for(int i=0;i<n;i++)
        arr[i]=i+1;

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    delete[] arr;
}