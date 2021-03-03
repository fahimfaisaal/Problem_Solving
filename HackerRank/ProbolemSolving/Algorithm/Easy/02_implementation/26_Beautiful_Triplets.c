#include <stdio.h>
#include <stdlib.h>

int beautifulTriplets(int d, int arr_count, int* arr) {
    int triplets = 0;
    
    for (int i = 0; i < arr_count - 2; i++) 
    for (int j = i + 1; j < arr_count - 1; j++) {
        if (arr[j] - arr[i] == d) for (int k = j + 1; k < arr_count; k++) {
            if (arr[k] - arr[j] == d) {
                triplets++;
                break;
            }
        }
    }

    return triplets;
}

int main() {

    int n, d;
    scanf("%d %d", &n, &d);

    int *nums = calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    int result = beautifulTriplets(d, n, nums);

    printf("%d\n", result);

    return 0;
}