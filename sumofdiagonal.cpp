#include <iostream>
using namespace std;

int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int d1=0,d2=0;

    for(int i=0;i<3;i++){
        d1+=a[i][i];
        d2+=a[i][2-i];
    }

    cout<<"Main="<<d1<<" Anti="<<d2;
}