#include<stdio.h>
#include<stdlib.h>

int main()
{
    int age;
    printf("Enter the age:");
    scanf("%d", &age); // allow user to enter the input information, &age is the pointer
    printf("you are %d years old \n", age); 

    double gpa;
    printf("Enter the gpa:");
    scanf("%lf", &gpa); // allow user to enter the input information, &age is the pointer, %lf for double
    printf("your gpa is %lf \n", gpa); 

    char grade;
    printf("Enter the grade:");
    scanf(" %c", &grade); // allow user to enter the input information, &age is the pointer, %lf for single character
    printf("your grade is %c \n", grade); 

   char name[20]; // max 20 characters,
printf("Enter the name:");
scanf("%s",name); // allow user to enter the input information, &age is the pointer, %s for string
printf("your name is %s \n", name);
/*i: arun Kumar
  o: arun
  the scanf() function will not print the characters after space */

getchar(); // clear newline before fgets

char Uname[20]; // max 20 characters,
printf("Enter the name:");
fgets(Uname, 20, stdin); // fgets similar to scanf but it includes all the bunch of characters including space, stdin refers to standerd input
printf("%s \n", Uname);

}