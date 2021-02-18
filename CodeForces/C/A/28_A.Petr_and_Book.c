#include <stdio.h>

int main() {
    int pages,
        readPages[7];
    
    scanf("%d", &pages);
    for (int i = 0; i < 7; i++)
        scanf("%d", &readPages[i]);

    int day = 1,
        i = 0;

    while (pages > 0) {
        if (day == 8) day = 1;
        if (i == 7) i = 0;

        pages -= readPages[i];
        day++, i++;
    }

    printf("%d\n", day - 1);

    return 0;
}