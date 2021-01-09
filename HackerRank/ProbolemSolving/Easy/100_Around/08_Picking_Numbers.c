#include <stdio.h>
#include <stdlib.h>

//! NOT SOLVED
int main(void) {
    // your code goes here
    int n;
    scanf("%d", &n);

    int *arr = calloc(n, sizeof(int)),
        max = 0;

    for (int i = 0; i < n; i++) {          
        scanf("%d",&arr[i]);
        arr[i] += 1;
    }
        
    for(int i = 1;i < 100; i++) {
        int sum = arr[i] + arr[i + 1];
        if (sum > max) max = sum;
    }
    printf("%d", max);
    return 0;
}
