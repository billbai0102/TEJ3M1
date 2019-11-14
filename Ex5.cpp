/*
    Name: Bill
    Teacher: Mr. Wong
    Date: 2019-11-13
    This program demonstrates the use of if statements.
*/

#include <stdio.h>
#include <string.h>

// Variable declarations
char word[21];
int len, pos;


// Introduction
void intro(){
    printf("%23sSee if you can understand strings!\n", "");
}

// Pause the program 
void pauseProgram(){
    printf("\nPress Enter key to continue...");
    getchar();
}

// User input
void userInput(){
    printf("Type a string between 1 and 20 characters: ");
    gets(word); // TODO: REPLACE THIS
    if(strlen(word) < 1 || strlen(word) > 20){
        printf("\nPlease try again!\n");
        userInput();
    }
}

// Processing and output
void display(){
    len = strlen(word);

    if(len < 5){
        printf("%s is smaller than 5 characters long\n", word);
    }else if (len % 2 != 0 && len >= 5){
        printf("%s has an odd number of letters.\n", word);
        pos = len/2 + 1;
        printf("The middle letter is at position %d\n", pos);
    }else if (len % 2 == 0 && len >= 5){
        printf("%s has an even number of letters.", word);
    }
}

// Main program
main(){
    intro();
    userInput();
    display();
    pauseProgram();
}