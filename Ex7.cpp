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

// 
void intro(){
    title("Calculation Game");
    printf("%19sThis program will test your math abilities.","");
    pauseProgram();
}

// 
void mainMenu(){
    title("Calculation Game");
    printf("\n%10s1.%4sPlay Game\n","","");
    printf("\n%10s2.%4sExit\n","","");
    printf("\n%10sEnter 1 or 2: ","","");
    scanf("%d", &choice);
    getchar();
    if(choice != 1 && choice != 2){
        printf("\nSorry, you must enter either 1 or 2!\nPlease try again.\n");
        pauseProgram();
        mainMenu();
    }
}

// 
void userInput(){
    title("Calculation Game");
    printf("%23sPlease enter positive numbers only!\n","");
    printf("\n Enter a number: ");
    scanf("%d", &num1);
    getchar();
    if(num1 < 0){
        printf("\nSorry, you must enter a positive value!\nPlease try again.\n");
        pauseProgram();
        userInput();
    }
    printf("\n Enter another number: ");
    scanf("%d", &num2);
    getchar();
    if(num2 < 0){
        printf("Sorry, you must enter a positive value!\nPlease try again.\n");
        pauseProgram();
        userInput();
    }
    printf("\n What is %d + %d? ", num1, num2);
    scanf("%d", &answer);
    getchar();
}

// 
void display(){
    title("Calculation Game");
    if(answer == (num1 + num2)){
        printf("\n%25sWow! You got the right answer!","");
    }else{
        printf("\n%13sHmmm... maybe we should reviw this math concent again!","");
    }
    pauseProgram();
}

// 
void goodbye(){
    title("Calculation Game");
    printf("\n%23sThis program is written by Bill Bai", ""); // Prints program author
    printf("\n%18sFor further information call: 1-800-123-4567", ""); // Prints program author
    pauseProgram();
}

// 
main(){
    intro();
    mainMenu();
    do{
        if(choice == 2)
            break;
        userInput();
        display();
        mainMenu();
    }while(1);
    goodbye();
}
