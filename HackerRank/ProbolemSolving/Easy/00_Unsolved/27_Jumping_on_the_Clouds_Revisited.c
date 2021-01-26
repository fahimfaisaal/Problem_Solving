#include <stdio.h>
#include <stdlib.h>

//! NOT SOLVED
int jumpingOnClouds(int n, int k, int *clouds) {
    int energyOnJump = 100;

    for (int i = 0; i < n; i += k) {
        if (clouds[i] == 1) energyOnJump = energyOnJump - 3;
        else energyOnJump--;
    }

    return energyOnJump;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int *clouds = calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &clouds[i]);

    int energy = jumpingOnClouds(n, k, clouds);

    printf("%d\n", energy);
    return 0;
}