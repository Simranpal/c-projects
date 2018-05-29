#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int randomNumber = rand() % 6;

    int num = 0 ;

    printf("Guess a number between 1-20 \n");
printf("Random answer : %d \n", randomNumber);


    for(int i = 20; i >= 1 ; i--) {
        printf("\nYou have %i tries left!\n", i);s
        printf("Enter your next guess: \n");
        scanf("%i", &num);

        if(num < randomNumber) {
            printf("Sorry, You entered %i, which is less than answer\n", num);
            continue;
        }
        else if(num > randomNumber) {
            printf("Sorry, You entered %i, which is greater than answer\n", num);
            continue;
        }
        else break;

    }
    if(num == randomNumber) {
         printf("Congratulations! you guess correct answer : %i", randomNumber);
    }

    return 0;
}
