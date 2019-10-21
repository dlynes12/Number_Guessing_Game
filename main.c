#include <stdio.h> // The standard Input and Output
#include <stdlib.h> // The standard library
#include <time.h> // Time

int main (void) {
  //print to screen

srand(time(NULL)); //random number generator seed
/* Now i will be listing variables
And setting a foundation for the random guessing game
*/

int randomNumber = rand() % (30 + 1 - 10) +10 ;   // Equation to find random number
int userNumber ; // the user inputs
int playAgain; // a flag to ask the user to play the game again

//while loop
while(playAgain != 1){

    printf("Guess a magic number between 10 and 30 \n") ;
    printf("Enter your guess (0-Exit / 1-Give Up) ") ;
    scanf("%d", &userNumber);
    if (userNumber == randomNumber){// check if the guessed number is the random number
    printf("== Yes, the number is %d, Good Job!", randomNumber);
    printf("== Play Again? (0-No / 1-Yes): ");
    scanf("%d", &userNumber);
    if (userNumber == 0){
        printf("See you next time! \n");
        playAgain = 1;
        main();
    }else if (userNumber == 1){
                main();
        }

    }

    else if(userNumber == 0)  {// check if the user wants to quit
        printf("See you next time!\n");
        playAgain = 1;
    }
    else if (userNumber == 1) // check if the user gives up and if they want to play again
    {
        printf("The magic number is %d \n", randomNumber);
        printf("== Play Again? (0-No / 1-Yes): ");
        scanf("%d", &userNumber);
        if (userNumber == 0)
        {
            printf("See you next time! \n");

            playAgain = 1;
        }
        else if (userNumber == 1)
        {
            main();
        }

    }
    else if (userNumber < randomNumber) // check if the number guessed is less than the random number
        {
            printf("== Your guess is too low\n");
        }
    else if (userNumber > randomNumber) // check if the number guessed is more than the random number
    {
           printf("== Your guess is too high\n");
        }

    }
}