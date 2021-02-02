#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isLeap(int year) {
    if ((year <= 1917 && !(year % 4)) || (year > 1918 && ((!(year % 400) || year % 100 != 0) && !(year % 4))))
        return true;

    return false;
}

void dayOfProgrammer(int y) {
    int date;

    if (y == 1918) date = 26;
    else if (isLeap(y)) date = 12;
    else date = 13;

    printf("%d.09.%d\n", date, y);
}

int main() {
    int year;

    scanf("%d", &year);

    dayOfProgrammer(year);

    return 0;
}