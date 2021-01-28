#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isEven(int len, int *arr) {
    for (int i = 0; i < len; i++) if (arr[i] % 2) return false;

    return true;
}

int main() {

    int len, j, minLoaves = 0;
    scanf("%d", &len);
    j = len;
    int *peoplesBread = calloc(len, sizeof(int));

    for (int i = 0; i < len; i++) scanf("%d", &peoplesBread[i]);

    while(j--) {
        for (int i = 1; i < len; i++) {
            if (peoplesBread[i - 1] % 2) {
                peoplesBread[i]++;
                peoplesBread[i - 1]++;
                minLoaves += 2;
                break;
            }
        }
    }
    
    if (isEven(len, peoplesBread)) printf("%d\n", minLoaves);
    else printf("NO\n");

    return 0;
}