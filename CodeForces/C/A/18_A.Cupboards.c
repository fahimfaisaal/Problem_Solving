#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int left, right,
        leftClose = 0,
        leftOpen = 0,
        rightClose = 0,
        rightOpen = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &left, &right);

        !left ? leftClose++ : leftOpen++;
        !right ? rightClose++ : rightOpen++;
    }

    int leftMin = leftClose > leftOpen ? leftOpen : leftClose,
        rightMin = rightClose > rightOpen ? rightOpen : rightClose;

    printf("%d\n", leftMin + rightMin);
}