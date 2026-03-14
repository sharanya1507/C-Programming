#include<stdio.h>
#include<stdlib.h>

int main(){

    char grade;
    printf("Enter your grade:");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
        printf("you did Excelent..!");
        break;
        case 'B':
        printf("You did grate..!");
        break;
        case 'C':
        printf("You did fine.");
        break;
        case 'D':
        printf("you did bad..");
        break;
        case 'F':
        printf("You are failed!");
        break;

        default:
        printf("Invalid Grade");

    }
}