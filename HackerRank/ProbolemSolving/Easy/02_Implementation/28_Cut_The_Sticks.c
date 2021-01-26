#include <stdio.h>
#include <stdlib.h>

int getMin(int len, int *ar) {
    int min = ar[0] == 0 ? 10000000000 : ar[0];

    for (int i = 1; i < len; i++) {
        if (ar[i] == 0) continue;
        else if (min > ar[i]) min = ar[i];
    }

    return min;
}

int *cutTheSticks(int len, int *numbers, int *resultLen) {
    int *result = calloc(10000, sizeof(int));
    int counter = 0;
    
    while (1) {
        int n = 0;
        int min = getMin(len, numbers);

        int cut = 0;
        for (int i = 0; i < len; i++) {
            if (numbers[i] == 0) n++;
            else {
                numbers[i] -= min;
                cut++;
            }
        }

        if (n == len) break;
        
        result[counter] = cut;
        counter++;
    }

    *resultLen = counter;

    return result;
}

int main() {

    int length;

    scanf("%d", &length);

    int *numbers = calloc(length, sizeof(int));
    for (int i = 0; i < length; i++)
        scanf("%d", &numbers[i]);

    int resultCount;
    int *result = cutTheSticks(length, numbers, &resultCount);

    for (int i = 0; i < resultCount; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}