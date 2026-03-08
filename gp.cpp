#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    //3,6,9,12,15,18........
    int a=3;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a+3;
    }
}