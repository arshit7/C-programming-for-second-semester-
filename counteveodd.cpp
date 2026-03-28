#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int even=0, odd=0;

    for(int i=0;i<5;i++){
        if(arr[i]%2==0) even++;
        else odd++;
    }

    cout<<"Even="<<even<<" Odd="<<odd;
}