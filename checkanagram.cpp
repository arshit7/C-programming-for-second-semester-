#include <iostream>
using namespace std;

int main() {
    string a="listen", b="silent";
    int count[26]={0};

    for(char c:a) count[c-'a']++;
    for(char c:b) count[c-'a']--;

    bool flag=true;
    for(int i=0;i<26;i++){
        if(count[i]!=0) flag=false;
    }

    cout<<(flag?"Anagram":"Not");
}