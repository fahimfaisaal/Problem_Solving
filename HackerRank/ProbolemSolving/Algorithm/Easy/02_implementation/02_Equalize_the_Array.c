#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

int getMax(int len, int *arr) {
    int max = arr[1],
        maxIndex = 1;
    
    for (int i = 2; i < len; i++) {
        if (!arr[i]) continue;
        if (max < arr[i]) {
            max = arr[i];
            maxIndex = i;
        }
    }
    
    return maxIndex;
}

int equalizeArray(int arr_count, int* arr) {
    
    int del = 0;
    int *flag = calloc(101, sizeof(int));
    int *flag2 = calloc(arr_count, sizeof(int));
    
    for (int i = 0; i < arr_count; i++) {
        flag2[i] = arr[i];
    }

    for (int i = 0; i < arr_count - 1; i++) {
        if (arr[i] == 0) continue;
        flag[arr[i]]++;
        
        for (int j = i + 1; j < arr_count; j++) {
            if (arr[i] == arr[j]) {
                arr[j] = 0;
                flag[arr[i]]++;
            }
        }
        arr[i] = 0;
    }
    
    int max = getMax(101, flag);

    for (int i = 0; i < arr_count; i++) {
        if (max != flag2[i]) del++;
    }
    
    return del;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int *arr = calloc(n, sizeof(int));
    
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    int result = equalizeArray(n, arr);
    
    printf("%d\n", result);

    return 0;
}