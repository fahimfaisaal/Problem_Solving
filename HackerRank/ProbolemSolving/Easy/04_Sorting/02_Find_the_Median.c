#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return (*(int*)a - *(int*)b);
}

int findMedian(int arr_count, int* arr) {
    int median = arr_count % 2 == 0 ? (arr_count / 2) + 1 : arr_count / 2;
    
    qsort(arr, arr_count, sizeof(int), cmpfunc);
    
    int result = arr[median];

    return result;
}

int main() {

    int n;
    scanf("%d", &n);

    int *arr = calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int result = findMedian(n, arr);
    printf("%d\n", result);
    return 0;
}