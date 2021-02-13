#include <stdio.h>
 
int main() { 
    int row, col, result;

    scanf("%d", &row);
    scanf("%d", &col);

    for (int i = 1, j = row % 2 ? 1 : 0; i <= col; i++) {
        result = j;
        !j ? j++ : j--;
    }

    printf ("%d\n", result);
 
    return 0;
}