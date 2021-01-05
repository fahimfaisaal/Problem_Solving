#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int diagonalDifference(int n, int **arr) {
    int primaryDiagonal = 0,
        secondaryDiagonal = 0,
        result;

    for (int i = 0, j = n - 1; i < n; i++) {
        //* The primary diagonal
        primaryDiagonal += arr[i][i];

        //* The secondary diagonal
        secondaryDiagonal += arr[i][j--];        
    }

    result = primaryDiagonal - secondaryDiagonal;

    if (secondaryDiagonal > primaryDiagonal) result *= -1;
    
    return result;
}

int main() {

    while (1) {

        int n;
        scanf("%d", &n);

        if (n <= 100) {
            int **input_numbers = malloc(n * sizeof(int*));

            for (int i = 0; i < n; i++) {
                *(input_numbers + i) = malloc(n * (sizeof(int)));

                for (int j = 0; j < n; j++) {
                    scanf("%d", &input_numbers[i][j]);
                }
            }

            int sum = diagonalDifference(n, input_numbers);

            printf("%d\n", sum);

            break;
        }
    }

    return 0;
}