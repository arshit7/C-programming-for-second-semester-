#include <iostream>
using namespace std;

int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++) f*=i;
    return f;
}

int main(){
    int n=145,sum=0,temp=n;

    while(n){
        int d=n%10;
        sum += fact(d);
        n/=10;
    }

    cout<<(sum==temp?"Strong":"Not Strong");
}