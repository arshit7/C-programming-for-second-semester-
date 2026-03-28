#include <iostream>
using namespace std;

int main() {
    string str="I love coding";
    int count=1;

    for(int i=0;i<str.length();i++){
        if(str[i]==' ')
            count++;
    }

    cout<<"Words: "<<count;
}