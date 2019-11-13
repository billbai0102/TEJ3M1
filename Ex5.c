/*
    Name: Bill
    Teacher: Mr. Wong
    Date: 2019-11-13
    This program will calculate the HST on a given price.
*/

#include <stdio.h>
#include <string.h>

// Variable declarations
char word[21];
int len, pos;


// Introduction
void intro(){
    printf("See if you can understand strings!\n");
}

// User input
void userInput(){
    printf("Type any word: ");
    gets(word); // TODO: REPLACE THIS
}

// Processing and output
void display(){
    len = strlen(word);

    if(len % 2 != 0){
        printf("%s has an odd number of letters.\n", word);
        pos = len/2 + 1;
        printf("The middle letter is at position %d\n", pos);
    }else{
        printf("%s has an even number of letters.\n", word);
    }
}
//12345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890

// Main program
main(){
    intro();
    userInput();
    display();
    getchar();
}