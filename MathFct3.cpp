/*
    Name: Bill
    Teacher: Mr. Wong
    Date: 2019-11-08
    This program will calculate the average of two test marks.
*/

#include <stdio.h>

double price, hst; // Global variable for the price and HST.

// Function title - prints title of program.
void title(){
    printf("\n%33sHST Calculator\n", "");
}

// Function intro - prints the title and program information.
void intro(){
    title(); // Prints title
    printf("%14sThis program will calculate HST on any given amount.\n\n", "");
}

// Function userInpit - Gets user input for the price and HST.
void userInput(){
    printf("Enter the price: ");
    scanf("%lf", &price); // Gets value for price
    printf("Enter the HST: ");
    scanf("%lf", &hst); // Gets value for HST
}


//Function display - Calculates and displays the HST. 
void display(double price, double hst){
    hst = hst/100; // Divide HST by 100 to covert it to a %
    printf("\nThe HST on $%.2lf is $%.2lf \n", price, price * hst);
    printf("After HST, the total is: $%.2lf", price + (price * hst));
}

// Main function - Access point for the program.
main(){
    intro(); // Prints title and program info
    userInput(); // Gets user input
    display(price, hst); // Displays HST
    getchar();
}