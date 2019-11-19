#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Declaration section
int num;
int guess;
int numOfGuesses = 0;

// Pause program
void pauseProgram(){
    printf("\nPress any key to continue...");
    getchar();
}

// Function Title
void title(char* programTitle){
    int len = strlen(programTitle);
    system("cls");
    printf("\n");
    for (int i = 0;  i < 40 - len/2; i++)
    {
        printf(" ");
    }
    printf("%s\n\n", programTitle);
}

// Function user input
void userInput(){
    title("Random Number");
    printf("Enter a number between 1 and 100: ");
    scanf("%d", &guess);
    getchar();
}

void randNum(){
    unsigned int iseed = (unsigned int)time(NULL);
    srand(iseed);

    num = rand() % 100;
    num = num + 1;
}

// Function displayRand
void display(){
    title("Random Number");
    if(guess > num){
        printf("\nCome down!\n");
        printf("%d", num);
    }else if (guess < num){
        printf("\nWay down there?!\n");
    }else{
        printf("\nRight on!\n");
    }

    pauseProgram();
}

void goodbye(){
    title("Random Number");
    if(num == guess){
        printf("\n\n%36sGood Job!", "");
    }else{
        printf("\n\n%30sTry again next time!", "");
        printf("\n%31sThe answer was: %d", "",num);
    }
    printf("\n\n%30sProgram by: Bill Bai", "");
}

main(){
    randNum();
    do{
        userInput();
        numOfGuesses++;
        display();
    }while(num != guess && numOfGuesses < 3);

    goodbye();
    pauseProgram();
}