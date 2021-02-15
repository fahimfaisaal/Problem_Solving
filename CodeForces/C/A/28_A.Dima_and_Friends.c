#include <stdio.h>

int main() { //! (NOT Solved)
    int n, fingers,
        friendsFingers = 0;
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &fingers);
        friendsFingers += fingers;
    }

    printf("%d\n", friendsFingers);

    return 0;
}