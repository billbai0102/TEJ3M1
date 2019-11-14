#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Declaration section
int num;
int guess;

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
    printf("%s\n", programTitle);
}

// Function user input
void userInput(){
    title("Random Number");
    printf("Enter a number between 1 and 100: ");
    scanf("%d", &guess);
    getchar();
}

// Function displayRand
void displayRand(){
    unsigned int iseed = (unsigned int)time(NULL);
    srand(iseed);

    num = rand() % 100;
    num = num + 1;
    title("Random Number");
    if(guess > num){
        printf("\nCome down!\n");
    }else if (guess < num){
        printf("\nWay down there?!\n");
    }else{
        printf("\nRight on!\n");
    }

    pauseProgram();
}

main(){
    do{
        userInput();
        displayRand();
        if(num == guess){
            break;
        }
    }while(1);
}