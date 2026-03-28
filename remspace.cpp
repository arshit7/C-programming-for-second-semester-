#include <iostream>
using namespace std;

int main(){
    string str="hello world";
    string res="";

    for(int i=0;i<str.length();i++){
        if(str[i] != ' ')
            res += str[i];
    }

    cout<<res;
}