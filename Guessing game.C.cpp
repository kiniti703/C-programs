//program to display guessing game
/*
Author: Bildad Gachau
Registration number: BCS-03-0135/2026
Description: guessing game
Date: 05/10/2026
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber;
    int guess;
    int attempts = 0;

	
    srand(time(NULL));
    secretNumber = (rand() % 20) + 1;

    printf("Guess the number between 1 and 20.\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        }
        else if (guess < secretNumber) {
            printf("Too low!\n");
        }
        else {
            printf("Congratulations!\n");
            printf("You guessed the number in %d attempts.\n", attempts);
            break;
        }
    }

    return 0;
}

