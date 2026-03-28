#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("file.txt");
    fout<<"ABC";
    fout.close();

    ifstream fin("file.txt");
    char ch;

    while(fin.get(ch)){
        cout<<ch;
    }
    fin.close();
}