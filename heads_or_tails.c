#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char name[50];
    printf("Who are you? \n> ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

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

    if (heads_count > tails_count) {
        printf("%s won!\n", name);
    } else {
        printf("%s lost!\n", name);
    }

    return 0;
}
