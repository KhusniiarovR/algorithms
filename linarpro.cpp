#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter the number of board x,y ";
    cin >> a >> b;
    char array[a][b];
    int move = -1, count = 2;
    char first, second;
    cout << "Enter first,second player letter ";
    cin >> first >> second;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
                array[i][j] = 'G';
        }
    }
    while (move) {
        cin >> move;
        int temp = move/a;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (array[i][j] == 'G') {
                array[i][j] = 'G';
            }
        }
    }
        if (array[temp-1][move%b+b-1] == 'G') {
            if (count % 2 == 0) {
                array[temp-1][move%b+b-1] = first;
                count++;
            }
            else if (count % 2 == 1) {
                array[temp-1][move%b+b-1] = second;
                count++;
            }
        }

        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                cout << array[i][j] << "  ";
            }
            cout << endl;
        }
        if ((array[0][0] == array[1][1] && array[1][1] == array[2][2] && array[2][2] != 'G') || (array[0][2] == array[1][1] && array[1][1] == array[2][0]) && array[2][0] != 'G') {
            cout << "YOU MOLODETS" << endl;
            break;
        }
        if ((array[0][0] == array[0][1] && array[0][1] == array[0][2] && array[0][2] != 'G') || (array[0][0] == array[1][0] && array[1][0] == array[2][0]) && array[2][0] != 'G') {
            cout << "YOU MOLODETS" << endl;
            break;
        }
        if ((array[1][0] == array[1][1] && array[1][1] == array[1][2] && array[1][2] != 'G') || (array[0][1] == array[1][1] && array[1][1] == array[2][1]) && array[2][1] != 'G') {
            cout << "YOU MOLODETS" << endl;
            break;
        }
        if ((array[2][0] == array[2][1] && array[2][1] == array[2][2] && array[2][2] != 'G') || (array[0][2] == array[1][2] && array[1][2] == array[2][2]) && array[2][2] != 'G') {
            cout << "YOU MOLODETS" << endl;
            break;
        }
    }
}