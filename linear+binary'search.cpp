#include <iostream>
using namespace std;

int main() {
    int arr[5]={10,20,30,40,50};
    int key=30;

    // Linear
    for(int i=0;i<5;i++){
        if(arr[i]==key)
            cout<<"Linear Found at "<<i<<endl;
    }

    // Binary
    int low=0,high=4;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            cout<<"Binary Found at "<<mid;
            break;
        }
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
}