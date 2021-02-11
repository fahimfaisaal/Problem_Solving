#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int exit, enter, firstExit, firstEnter, cal;    
    scanf("%d %d", &firstExit, &firstEnter);
    int max = firstEnter;

    n--;
    while (n--) {
        scanf("%d %d", &exit, &enter);
        cal = (firstEnter - exit) + enter;
        if (cal > max) max = cal;
        firstEnter = cal;
    }

    printf("%d\n", max);

    return 0;
}