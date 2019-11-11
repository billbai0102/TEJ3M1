/*
    Name: Bill
    Teacher: Mr. Wong
    Date: 2019-11-08
    This program will calculate the average of two test marks.
*/

#include <stdio.h>

int hst;
double price;

// Function title - prints title of program.
void title(){
    printf("\n%33sHST Calculator\n", "");
}

void intro(){
    title();
    printf("%14sThis program will calculate HST on any given amount.\n", "");
}

void userInput(){
    printf("Enter the price: ");
    scanf("%lf", &price);
    printf("Enter the HST as an integer: ");
    scanf("%d", &hst);
}

void display(double price, int hst){
    printf("\nThe HST on $%.2lf is $%.2lf \n", price, (price * hst)/100);
    printf("After tax, the total is: $%.2lf", price + (price * hst) / 100);
}

main(){
    intro();
    userInput();
    display(price, hst);
    getchar();
}