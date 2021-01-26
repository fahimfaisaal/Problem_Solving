#include <stdio.h>
#include <stdlib.h>

int minimumDistances(int a_count, int* a) {
    int len = 0;
    int *minimum = calloc(1000, sizeof(int));

    for (int i = 0; i < a_count - 1; i++) {
        for (int j = i + 1; j < a_count; j++) {
            if (a[i] == a[j]) {
                minimum[len] = j >= i ? j - i : i - j;
                len++;
                break;
            }
        }
    }
    
    if (len == 0) return - 1;
    
    int min = minimum[0];
    for (int i = 1; i < len; i++) {
        if (min > minimum[i]) min = minimum[i];
    }
    
    return min;
}

int main() {
    int n;
    scanf("%d", &n);

    int *arr = calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int result = minimumDistances(n, arr);
    printf("%d\n", result);

    return 0;
}