#include <stdio.h>

int main() {
    int numberOfFriends;
    scanf("%d", &numberOfFriends);

    int totalFingers = 0,
        fingers;
    for (int i = 0; i < numberOfFriends; i++) {
        scanf("%d", &fingers);
        totalFingers += fingers;
    }

    int fingerCanShow = 0;
    for (int i = 1; i <= 5; i++)
        if ((totalFingers + i) % (numberOfFriends + 1) != 1)
            fingerCanShow++;

    printf("%d\n", fingerCanShow);

    return 0;
}