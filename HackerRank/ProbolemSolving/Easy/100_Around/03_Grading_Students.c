#include <stdio.h>
#include <stdlib.h>

int *gradingStudents(int n, int *gradesArr) {

    for (int i = 0; i < n; i++) {
        int roundMarks = 40;

        for (int j = 0; j < 13; j++) {
            if (gradesArr[i] < roundMarks && gradesArr[i] > 37) {
                int round = roundMarks - gradesArr[i];

                if (round < 3) {
                    gradesArr[i] = roundMarks;
                    break;
                }
            }
            roundMarks += 5;
        }
    }

    return gradesArr;
}

int main() {
    int n;

    scanf("%d", &n);

    int *grades = malloc(n * 4);

    for (int i = 0; i < n; i++) {
        scanf("%d", &grades[i]);
    }

    int *roundGrades = malloc(n * 4);

    roundGrades = gradingStudents(n, grades);

    for (int i = 0; i < n; i++) printf("%d\n", roundGrades[i]);

    return 0;
}