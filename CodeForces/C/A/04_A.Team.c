#include <stdio.h>

int main() {
    int count,
        condition_count = 0,
        number_of_implimentation = 0;

    scanf("%d", &count);

    if (count >= 1 && count <= 1000) {
        int inputs_container[count][3];

        for (int i = 0; i < count; i++)
            for (int j = 0; j < 3; j++) {
                scanf("%d", &inputs_container[i][j]);
            }

        for (int i = 0; i < count; i++) {
            for (int j = 0; j < 3; j++) inputs_container[i][j] == 1 && condition_count++;
            
            if (condition_count == 2 || condition_count == 3) {
                number_of_implimentation++;
            }
            condition_count = 0;
        }

        printf("%d\n", number_of_implimentation);
    }

    return 0;
}