#include <iostream>
using namespace std;

int main(){
    int choice,a=10,b=5;

    cout<<"1.Add 2.Sub 3.Mul 4.Div\n";
    cin>>choice;

    switch(choice){
        case 1: cout<<a+b; break;
        case 2: cout<<a-b; break;
        case 3: cout<<a*b; break;
        case 4: cout<<a/b; break;
        default: cout<<"Invalid";
    }
}