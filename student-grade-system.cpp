#include <iostream>
using namespace std;

int main() {
    int marks[5], total=0;
    float per;

    cout<<"Enter marks:\n";
    for(int i=0;i<5;i++){
        cin>>marks[i];
        total+=marks[i];
    }

    per = total/5.0;

    cout<<"Percentage="<<per<<endl;

    if(per>=90) cout<<"Grade A";
    else if(per>=75) cout<<"Grade B";
    else if(per>=60) cout<<"Grade C";
    else cout<<"Fail";
}