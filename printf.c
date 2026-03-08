#include<stdio.h>
#include<stdlib.h>

int main()
{
    // printf() is an function
    // format specifer which prints numbers
    // %d for numbers, %s for text, %f for double, %c for single character
    int num = 10;
    char single = 'i';
    printf("%d \n", num);
    printf("%d \n", 200);
    printf("My favorite %s is %d \n", "Number", 4);
    printf("My favorite %s is %f \n", "Number", 4.005);
    printf("My %c is %d \n", single,4);

}