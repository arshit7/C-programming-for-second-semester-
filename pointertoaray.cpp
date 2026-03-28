#include <iostream>
using namespace std;

int main() {
    int arr[3]={10,20,30};
    int *p=arr;

    for(int i=0;i<3;i++)
        cout<<*(p+i)<<" ";
}