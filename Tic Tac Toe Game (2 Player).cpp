#include <iostream>
using namespace std;

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

void display() {
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++)
            cout << board[i][j] << " ";
        cout << endl;
    }
}

void mark(int pos, char symbol) {
    int r = (pos-1)/3;
    int c = (pos-1)%3;
    board[r][c] = symbol;
}

int main() {
    int pos;
    char player = 'X';

    for(int i=0;i<9;i++) {
        display();
        cout << "Player " << player << " enter position: ";
        cin >> pos;

        mark(pos, player);
        player = (player=='X') ? 'O' : 'X';
    }

    display();
}