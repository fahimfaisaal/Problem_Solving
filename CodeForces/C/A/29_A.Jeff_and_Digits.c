#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int numbers[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &numbers[i]);

    int numberOfFive = 0,
        numberOfZero = 0;

    for (int i = 0; i < n; i++) {
        numbers[i] == 5 && numberOfFive++;
        !numbers[i] && numberOfZero++;
    }

    if (!numberOfZero) printf("-1\n");
    else if (numberOfFive < 9) printf("0\n");
    else {
        numberOfFive = (numberOfFive / 9) * 9;

        while (numberOfFive--)
            printf("5");

        while (numberOfZero--)
            printf("0");

        printf("\n");
    }
    
    return 0;
}