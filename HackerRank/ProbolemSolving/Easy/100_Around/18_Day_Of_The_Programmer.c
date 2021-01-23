#include <stdio.h>
#include <stdlib.h>

void dayOfProgrammer(int y) {
    int date;

    if (y == 1918) {
        date = 26;
    } else if ((y <= 1917 && !(y % 4)) || (y > 1918 && ((!(y % 400) || y % 100 != 0) && !(y % 4)))) {
        date = 12;
    } else date = 13;

    printf("%d.09.%d\n", date, y);
}

int main() {

    int year;

    scanf("%d", &year);

    dayOfProgrammer(year);

    return 0;
}