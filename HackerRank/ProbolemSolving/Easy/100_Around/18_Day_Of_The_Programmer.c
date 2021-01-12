#include <stdio.h>
#include <stdlib.h>

//! NOT SOLVED
void dayOfProgrammer(int y) {
    int Gregorian_calendar[8] = {31, 28, 31, 30, 31, 30, 31, 31};
    int Julian_calendar[8] = {29, 28, 31, 29, 31, 29, 31, 29};

    int calender_by_year[8];

    for (int i = 0; i < 8; i++)  {
        if (y > 1917) calender_by_year[i] = Gregorian_calendar[i];
        else calender_by_year[i] = Julian_calendar[i];      
    }

    if (y % 4 == 0 && y % 100 != 0) calender_by_year[1]++;

    int totalDays = 0;
    for (int i = 0; i < 8; i++) totalDays += calender_by_year[i];

    int d = 256 - totalDays;

    printf("%d.09.%d\n", d, y);
}

int main() {

    int year;

    scanf("%d", &year);

    dayOfProgrammer(year);

    return 0;
}