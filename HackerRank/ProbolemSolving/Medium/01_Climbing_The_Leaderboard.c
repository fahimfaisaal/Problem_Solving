#include <stdio.h>
#include <stdlib.h>

//# Time limit exceeded

int get_rank(int rank_count, int player_score, int *rank_scores) {
    int player_rank = 1;

    for (int i = 0; i < rank_count; i++) {
        if (rank_scores[i] <= player_score) return player_rank;
        else if (rank_scores[i - 1] != rank_scores[i]) player_rank++;
    }

    return player_rank;
}

int main() {
    int rank_count,
        player_count,
        player_score;

    scanf("%d", &rank_count);
    int *rank_scores = calloc(rank_count, 4);

    for (int i = 0; i < rank_count; i++)
     scanf("%d", &rank_scores[i]);

    scanf("%d", &player_count);

    while (player_count--) {
        scanf("%d", &player_score);
        printf("%d\n", get_rank(rank_count, player_score, rank_scores));
    }

    return 0;
}
