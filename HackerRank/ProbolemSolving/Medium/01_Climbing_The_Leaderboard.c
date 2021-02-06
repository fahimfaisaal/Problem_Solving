#include <stdio.h>
#include <stdlib.h>

int main() {
    int rank_count,
        player_count,
        player_score;

    scanf("%d", &rank_count);
    int *scores = calloc(rank_count, 4),
        *rank = calloc(rank_count, 4);

    for (int i = 0, r = 0; i < rank_count; i++) {
        scanf("%d", &scores[i]);
        (scores[i] != scores[i - 1]) && r++;
        rank[i] = r;
    }

    scanf("%d", &player_count);

    int len = (rank_count % 2) ? (rank_count / 2) + 1 : rank_count / 2,
        partitionOne = scores[len - 1],
        partitionTwo = scores[len];

    while (player_count--) {
        scanf("%d", &player_score);

        int i = (player_score < partitionOne) ? len : 0,
            operation = !i ? len : rank_count;

        for (; i < operation; i++) {
            if (player_score >= scores[i]) {
                printf("%d\n", rank[i]);
                break;
            }
            
            (i == operation - 1 && player_score < scores[i]) && printf("%d\n", rank[i] + 1);
        }
    }

    return 0;
}