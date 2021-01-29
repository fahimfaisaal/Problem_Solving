#include <stdio.h>

int main() {
    int number, 
        onePosition;

    for (int i = 1; i != 26; i++) {
        scanf("%d", &number);

        if (number) onePosition = i;
    }

    int row = onePosition / 5, col;

    if (onePosition % 5 != 0) col = (onePosition % 5) - 1;
    else {
        row--;
        col = 4;
    }

    int result = (col > 2 ? col - 2 : 2 - col) + (row > 2 ? row - 2 : 2 - row);
    
    printf("%d\n", result);

    return 0;
}