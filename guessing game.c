//
// Created by emilt on 16-09-2022.
//
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * A small game where the user must guess a (random) number between 1 and 20.
 * The player can guess multiple times, but at the end the number of guesses must be reported.
 * If the user guesses a number outside of [1,20], then the user can guess again, and the invalid guess is not counted.
 *
 * Bonus: Report after each guess if the user was above or below the number.
 */

int main(void)
{
    int number;
    int guess;
    int guesscount=0;
    // remember to initialize random!
    srand((unsigned) time(0));
    number = rand();

    number = 1 + (number % 20);

    while(guess!=number){
        printf("Input you guess> \n");
        scanf(" %d", &guess);
        if(guess<1||guess>20) {
            printf("The number is between 1 and 20, try again.\n");
            continue;
        }
        if(guess>number){
            printf("You guessed too high\n");
        }
        else if(guess<number){
            printf("You guessed too low\n");
        }
        ++guesscount;
    }
// what is the random number?
    printf("Random number = %d, guess = %d\n", number, guess);
    printf("You won! With %d number of guesses",guesscount);
    return 0;

}