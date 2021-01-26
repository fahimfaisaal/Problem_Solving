#include <stdio.h>
#include <stdlib.h>

//# Solved but have to optimize 🙄

int get_ranked(int rank_count, int score, int *arr) {
    int player_rank;

    for (int i = 0, j = 1; i < rank_count; i++) {
        if (i == 0) player_rank = j;
        else if (arr[i - 1] == arr[i]) player_rank = j;
        else player_rank = ++j;

        if (arr[i] <= score) return player_rank;
        if (i == rank_count - 1) {
            if (arr[i - 1] == score) player_rank = j;
            else player_rank = ++j;
        }
    }

    return player_rank;
}

int *climbing_leaderboard(int rank_count, int *rank_scores, int player_count, int *player_scores) {

    int *player_rank = malloc(player_count * 4);

    for (int i = 0; i < player_count; i++) {
        player_rank[i] = get_ranked(rank_count, player_scores[i], rank_scores);
    }

    return player_rank;
}

int main() {

    int rank_count, player_count;

    scanf("%d", &rank_count);
    int *rank_scores = malloc(rank_count * 4);

    for (int i = 0; i < rank_count; i++) scanf("%d", &rank_scores[i]);

    scanf("%d", &player_count);
    int *player_scores = malloc(player_count * 4);

    for (int i = 0; i < player_count; i++) {
        scanf("%d", &player_scores[i]);
    }

    int *result = malloc(player_count * 4);
    result = climbing_leaderboard(rank_count, rank_scores, player_count, player_scores);

    for (int i = 0; i < player_count; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}