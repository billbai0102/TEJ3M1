/*
    Name: Bill
    Teacher: Mr. Wong
    Date: 2019-11-20
    This program uses loops and the rand() method to create a 
     number guessing game.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Declaration section
int num;
int guess;
int numOfGuesses = 0;

// Pauses program
void pauseProgram(){
    printf("\n\nPress any key to continue...");
    getchar(); // Pauses program until enter key is pressed
}

// Clears screen and prints program title
void title(char* programTitle){
    int len = strlen(programTitle); // len stores the length of the string programTitle
    system("cls"); // Clears screen
    printf("\n");
    // Prints 40 - len/2 amount of spaces to print title of program in the middle.
    for (int i = 0;  i < 40 - len/2; i++)
    {
        printf(" ");
    }
    printf("%s\n\n", programTitle); // Prints program title
}

// Takes in user input for the int variable guess
void userInput(){
    title("Random Number"); // Clears screen, prints title
    printf("Enter a number between 1 and 100: ");
    scanf("%d", &guess); // Gets value for guess
    getchar();
    //Error trap - will keep prompting for user input until input is valid.
    if(guess < 1 || guess > 100){
        printf("That number is out of range!\n");
        pauseProgram();
        userInput();
    }else{
        numOfGuesses++; // Increments user's number of guesses
    }
}

// Generates a random int value for num
void randNum(){
    unsigned int iseed = (unsigned int)time(NULL); // Uses computer's internal clock control seed choice
    srand(iseed); // Sets seed value for generating a pseudo-random integer.

    num = rand() % 100; // Returns a random integer between range 0 - 99
    num = num + 1; // Changes the range of the random int to 1-100
}

// Prints messages based on whether user's guess was correct, above, or below the answer.
void display(){
    title("Random Number");
    // If statement that controls what to print based on user's guess.
    if(guess > num)
    {
        printf("\nCome down!\n");
    }
    else if (guess < num)
    {
        printf("\nWay down there?!\n");
    }
    else
    {
        printf("\nRight on!\n");
    }

    pauseProgram();
}

// Displays a closing screen based on whether user did or didn't guess the correct number.
void goodbye(){
    title("Random Number");
    // If statement that controls what to print based on the user's answers.
    if(num == guess)
    {
        printf("\n\n%36sGood Job!", "");
    }
    else
    {
        printf("\n\n%30sTry again next time!", "");
        printf("\n%31sThe answer was: %d", "",num);
    }
    printf("\n\n%30sProgram by: Bill Bai", ""); // Prints program author
}

// Main method that controls program flow
main(){
    randNum(); // Generates a random int
    // Do-while loop that exits when user has used their 3 guesses, or if they get the answer correct.
    do{
        userInput(); // Gets user input for their guess.
        display(); // Displays message
    }while(num != guess && numOfGuesses < 3);

    goodbye(); // Displays closing screen
    pauseProgram();
}