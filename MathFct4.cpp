/*
    Name: Bill
    Teacher: Mr. Wong
    Date: 2019-11-08
    This program demonstrates four functions and it's uses - round(), sqrt(). pow(), and ceil().
*/

#include <stdio.h>
#include <math.h> // Header files needed for Math functions

double num, num2; // Global variables

//Function title - Prints the title of program
void title(){
    printf("\n%30sMore Math Functions\n", "");
}

// Function spacing - create a number of blank lines, and then a number of spaces based on calling arguments
void spacing(int numOfLines, int numOfSpaces){
    // Adds numOfLines blank lines
    for(int x = 0; x < numOfLines; x++)
        printf("\n");
    // Adds numOfSpaces blank spaces 
    for(int x = 0; x < numOfSpaces; x++)
        printf(" ");
}

// Function intro - prints program's title and information.
void intro(){
    title(); // Prints title
    spacing(0, 5);
    printf("This program demonstrates four new Math functions that are very useful!");
}

// Function userInput - Obtains user input for num and num2
void userInput(){
    spacing(2, 25);
    printf("Enter the first real number: ");
    scanf("%lf", &num);
    spacing(0, 25);
    printf("Enter the second real number: ");
    scanf("%lf", &num2);
}

// Function display - Displays program excluding intro.
void display(){
    double ansRounded = round(num);
    spacing(2, 25);
    printf("%lf is rounded as %lf\n", num, ansRounded);
    
    double ansPow = pow(num, num2);
    spacing(0, 17);
    printf("%lf to the power of %lf is %lf\n", num, num2, ansPow);

    double ansSqrt = sqrt(num);
    spacing(0, 20);
    printf("The square root of %lf is %lf\n", num, ansSqrt);

    double ansCeil = ceil(num);
    spacing(0, 13);
    printf("%lf rounded up to the nearest integer is %lf\n", num, ansCeil);
}

main(){
    intro();
    userInput();
    display();
    getchar();
    // printf("Answer is %lf\n", answer);
}