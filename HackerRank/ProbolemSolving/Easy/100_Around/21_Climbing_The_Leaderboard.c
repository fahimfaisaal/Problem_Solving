#include <stdio.h>
#include <stdlib.h>

int *bubble_sort(int n, int*arr) {
    int swap;

    for (int i = 0; i < n - 1; i++)       
    for (int j = 0; j < n - i - 1; j++) {
        if (arr[j] < arr[j + 1]) {
            swap = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = swap;
        }
    }
    
    return arr;
}

int get_ranked(int rank_count, int score, int *arr) {
    arr[rank_count] = score;

    rank_count += 1;
    int player_rank;
    arr = bubble_sort(rank_count, arr);

    int *ranked_arr = malloc(rank_count * 4);

    for (int i = 0, j = 1; i < rank_count; i++) {
        if (i == 0) ranked_arr[i] = j;
        else if (arr[i - 1] == arr[i]) ranked_arr[i] = j;
        else ranked_arr[i] = ++j;

        if (arr[i] == score) {
            player_rank = ranked_arr[i];
            break;
        }
    }

    return player_rank;
}

int *climbing_leaderboard(int rank_count, int *rank_scores, int player_count, int *player_scores) {

    int *sort_rank = malloc(rank_count * 4);
    sort_rank = bubble_sort(rank_count, rank_scores);

    int *player_rank = malloc(player_count * 4);

    for (int i = 0; i < player_count; i++) {
        player_rank[i] = get_ranked(rank_count, player_scores[i], sort_rank);
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