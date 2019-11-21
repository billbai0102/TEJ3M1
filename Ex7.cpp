/*
    Name: Bill
    Teacher: Mr. Wong
    Date: 2019-11-20
    This program uses loops and the rand() method to create a 
     number guessing game.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 
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

// 
void pauseProgram(){

}

// 
void intro(){

}

// 
void mainMenu(){

}

// 
void userInput(){

}

// 
void display(){

}

// 
void goodbye(){

}

// 
main(){

}
