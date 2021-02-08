#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, 
        maxDigit = 0;
    
    scanf("%d", &n);

    int *arr = calloc(n, sizeof(int));    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (maxDigit < arr[i]) 
            maxDigit = arr[i];
    }

    int *modeNum = calloc(maxDigit + 1, sizeof(int));
    for (int i = 0; i < n; i++)
        modeNum[arr[i]]++;

    int pickNumber = 0;
    for (int i = 1; i <= maxDigit; i++)
        if (modeNum[i]) {
            int sum = modeNum[i] + modeNum[i + 1];
            if (sum > pickNumber) pickNumber = sum;
        }
    
    printf("%d\n", pickNumber);

    return 0;
}