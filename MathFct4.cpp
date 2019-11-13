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
    for(int x = 0; x < numOfLines; x++)
        printf("\n");
    for(int x = 0; x < numOfSpaces; x++)
        printf(" ");
}

//Function intro - prints program's introduction.
void intro(){
    title();
    spacing(0, 5);
    printf("This program demonstrates two new Math functions that are very useful!");
}

void userInput(){
    spacing(2,0);
    printf("Enter the first real number: ");
    scanf("%lf", &num);
    printf("Enter the second real number");
    scanf("%lf", &num2);
    getchar();
}

//Function display - Displays program excluding intro.
void display(){
    double answer;
    spacing(3, 30);
    answer = round(num);
    printf("%lf is rounded as %lf\n", num, answer);
    spacing(1, 30);
    printf("%lf to the power of %lf is %lf\n", num, num2, pow(num, num2));
    spacing(1, 30);
    printf("The square root of %lf is %lf\n", num, sqrt(num));
    spacing(1, 30);
    printf("%lf rounded up to the nearest integer is %d\n", num, ceil(num));
}

main(){
    intro();
    userInput();
    display();
    getchar();
    // printf("Answer is %lf\n", answer);
}