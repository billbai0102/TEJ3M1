/*
    Name: Bill
    Teacher: Mr. Wong
    Date: 2019-11-22
    This program vertically and horizonally centers a string.
*/

#include <stdio.h>
#include <string.h>

// String that will be centered
char text [] = "12345678901234567890";

// Displays the vertically and horizontally centered text.
void display(){
    int verticalCenter = 43 * 0.5  - (strlen(text)*0.5); // Vertical center index
    // Adds blank lines to vertically center text
    for(int i = 0; i < verticalCenter; i++)
        printf("\n");
    // Prints the text vertically, and horizontally centered
    for(int i = 0; i < strlen(text); i++){
        printf("%40c\n", text[i]);
    }
}

// Main program - controls program flow.
int main(){
    display();
    getchar();
}
