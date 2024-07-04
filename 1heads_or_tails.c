#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int heads_count = 0;
    int tails_count = 0;
    printf("Tossing a coin...\n");

    for (int i = 1; i <= 3; i++) {
        int result = rand() % 2;
        if (result == 0) {
            heads_count++;
            printf("Round %d: Heads\n", i);
        } else {
            tails_count++;
            printf("Round %d: Tails\n", i);
        }
    }

    printf("Heads: %d, Tails: %d\n", heads_count, tails_count);

    return 0;
}