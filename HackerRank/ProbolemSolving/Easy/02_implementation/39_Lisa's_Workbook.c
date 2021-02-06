#include <stdio.h>

int main() {
    int n, k,
        problem,
        page = 1,
        specialProblem = 0;
    
    scanf("%d %d", &n, &k);

    while (n--) {
        scanf("%d", &problem);

        for (int prob = 1, c = k; prob <= problem; prob++, c--) {
            if (!c) {
                c = k;
                page++;
            }
            (page == prob) && specialProblem++;
        }

        page++;
    }

    printf("%d\n", specialProblem);

    return 0;
}