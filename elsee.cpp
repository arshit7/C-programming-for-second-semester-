
//take a positive integer input and tell id it is divisible by 5 or not
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    if(n%5!=0){
        cout<<n<<"is not divisible by 5."<<endl;

    }
    else{
        cout<<n<<" is divisible by 5."<<endl;
    }
}
