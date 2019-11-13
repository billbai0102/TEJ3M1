/*
    Name: Bill
    Teacher: Mr. Wong
    Date: 2019-11-08
    This program will calculate the HST on a given price.
*/

#include <stdio.h>

double price; // Global variable for the price

// Function title - prints title of program.
void title(){
    printf("\n%33sHST Calculator\n", "");
}

// Function intro - prints the title and program information.
void intro(){
    title(); // Prints title
    printf("%14sThis program will calculate HST on any given amount.\n\n", ""); // Prints program info
}

// Function userInput - Gets user input for the price and HST.
void userInput(){
    printf("Enter the price: $");
    scanf("%lf", &price); // Gets value for price
}


//Function display - Calculates and displays the HST. 
void display(){
    double HST = 0.13; // Double for the HST constant.
    printf("\nThe HST on $%.2lf is $%.2lf \n", price, price * HST);
    printf("After HST, the total is: $%.2lf", price + (price * HST));
}

// Main function - Access point for the program.
main(){
    intro(); // Prints title and program info
    userInput(); // Gets user input
    display(); // Displays HST
    getchar();
}