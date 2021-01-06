#include <stdio.h>
/*
* Input n = 6

* Output ->
     #
    ##
   ###
  ####
 #####
######
*/

void staircase(int n) {
    for (int i = 0; i < n; i++) {
                    
        for (int j = i; j < n - 1; j++) printf(" ");
        
        for (int k = 0; k < i + 1; k++) printf("#");

        printf("\n");
    }
}

int main() {

    int n;
    
    while (1) {
        scanf("%d", &n);

        if (n <= 100 && 1 <= n) {
            staircase(n);
            break;
        }
    }

    return 0;
}