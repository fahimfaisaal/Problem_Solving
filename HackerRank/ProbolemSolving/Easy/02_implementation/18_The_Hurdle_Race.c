#include <stdio.h>
#include <stdlib.h>

int hurdleRace(int length, int height, int *hurdels) {
    int max = hurdels[0];

    for (int i = 1; i < length; i++)
     if (max < hurdels[i]) max = hurdels[i];
 
    int result = max - height;
    if (result < 0) return 0;

    return result;
}

int main() {

    int length, height;

    scanf("%d %d", &length, &height);

    int *hurdels = malloc(length * sizeof(int));

    for (int i = 0; i < length; i++) scanf("%d", &hurdels[i]);

    int result = hurdleRace(length, height, hurdels);

    printf("%d\n", result);
    return 0;
}