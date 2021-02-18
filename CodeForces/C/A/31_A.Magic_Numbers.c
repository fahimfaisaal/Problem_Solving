#include <stdio.h>
#include <string.h>
 
int main() {
    char number[100000001];
    scanf("%s", number);
 
    long int len = strlen(number);
 
    int isNo = 0;
    for (long int i = 0; i < len; i++) {
        if (number[i] != '1' && number[i] != '4') {
            printf("NO\n");
            isNo = 1;
            break;
        }
 
        if (number[i] == '1' && number[i + 1] == '4' && number[i + 2] == '4') i += 2;
        else if (number[i] == '1' && number[i + 1] == '4') i++;        
        else if (number[i] == '4') {
            printf("NO\n");
            isNo = 1;
            break;
        }
    }
 
    !isNo && printf("YES\n");
 
    return 0;
}