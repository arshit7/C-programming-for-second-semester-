#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    bool sorted=true;

    for(int i=0;i<4;i++){
        if(arr[i]>arr[i+1])
            sorted=false;
    }

    cout<<(sorted?"Sorted":"Not Sorted");
}