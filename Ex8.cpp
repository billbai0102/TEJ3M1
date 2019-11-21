#include <stdio.h>
#include <string.h>


char people [] = "HELLO";

void display(){
    int verticalCenter = 30  - (strlen(people)/2);
    for(int i = 0; i < verticalCenter; i++)
        printf("\n");
    for(int i = 0; i < strlen(people); i++){
        printf("%39c\n", people[i]);
    }
}

int main(){
    display();
    getchar();
}