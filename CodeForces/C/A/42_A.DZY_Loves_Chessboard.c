#include <stdio.h>

int main() {
    int row, col;
    scanf("%d %d", &row, &col);

    char board[row][col + 1];

    for (int i = 0; i < row; i++) {
        scanf("%s[^\n]", board[i]);        
    }

    char black = 'B',
        white = 'W';

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i % 2) {
                if (board[i][j] != '-')
                    board[i][j] = j % 2 ? black : white;
            } else {
                if (board[i][j] != '-')
                    board[i][j] = j % 2 ? white : black;
            }
        }
    }

    for (int i = 0; i < row; i++) {
        printf("%s\n", board[i]);
    }
    
    return 0;
}