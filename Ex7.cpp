/*
    Name: Bill
    Teacher: Mr. Wong
    Date: 2019-11-21
    This program is a calculation game where the user must find the value of a simple arithmetic equation.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Declaration section
int choice;
int num1, num2;
int answer;

// Clears screen and prints program title
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

// Pauses program
void pauseProgram(){
    printf("\n\nPress any key to continue...");
    getchar(); // Pauses program until enter key is pressed
}

// Prints program introduction
void intro(){
    title("Calculation Game");
    printf("%19sThis program will test your math abilities.","");
    pauseProgram();
}

// Program's main menu - Allows user to exit or run the program.
void mainMenu(){
    title("Calculation Game");
    printf("\n%10s1.%4sPlay Game\n","","");
    printf("\n%10s2.%4sExit\n","","");
    printf("\n%10sEnter 1 or 2: ","","");
    scanf("%d", &choice); // Gets users menu choice
    getchar();
    // Error trap - Only allows user to continue if their choice is 1 or 2.
    if(choice != 1 && choice != 2){
        printf("\nSorry, you must enter either 1 or 2!\nPlease try again.\n");
        pauseProgram();
        mainMenu();
    }
}

// Gets user input for num1, num2, and their answer.
void userInput(){
    title("Calculation Game");
    printf("%23sPlease enter positive numbers only!\n","");
    printf("\n Enter a number: ");
    scanf("%d", &num1); // Gets input for num1
    getchar();
    // Error trap - Only allows user to continue if num1 is positive.
    if(num1 < 0){
        printf("\nSorry, you must enter a positive value!\nPlease try again.\n");
        pauseProgram();
        userInput();
    }
    printf("\n Enter another number: ");
    scanf("%d", &num2); // Gets input for num2
    getchar();
    // Error trap - Only allows user to continue if num1 is positive.
    if(num2 < 0){
        printf("Sorry, you must enter a positive value!\nPlease try again.\n");
        pauseProgram();
        userInput();
    }
    printf("\n What is %d + %d? ", num1, num2);
    scanf("%d", &answer); // Gets input for answer
    getchar();
}

// Displays a message based on whether user answered correctly or not.
void display(){
    title("Calculation Game");
    // If statement that controls what message to output based on what their answer was.
    if(answer == (num1 + num2)){
        printf("\n%25sWow! You got the right answer!","");
    }else{
        printf("\n%13sHmmm... maybe we should review this math concept again!","");
    }
    pauseProgram();
}

// Displays closing screen
void goodbye(){
    title("Calculation Game");
    printf("\n%23sThis program is written by Bill Bai", ""); // Prints program author
    printf("\n%18sFor further information call: 1-800-123-4567", ""); // Prints program information
    pauseProgram();
}

// Main method - controls program flow
main(){
    intro(); // Displays introduction
    // Do-while loop that controls program flow, and will exit when user chooses to.
    do{    
        mainMenu(); // Displays main menu
        if(choice == 2)
            break;
        userInput(); // Gets user input
        display(); // Displays message based on user's answer
    }while(1);
    goodbye(); // Displays closing screen
}
