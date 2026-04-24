#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream fout("data.txt");

    for(int i=1;i<=5;i++)
        fout << i << " ";

    fout.close();

    ifstream fin("data.txt");
    int x;

    while(fin >> x)
        cout << x*x << " ";

    fin.close();
}