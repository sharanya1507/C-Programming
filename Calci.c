// %lf for scanf(), %f for printf() -------> which stores all the decimal or integers

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double num1;
    double num2;

    printf("enter the first number:");
    scanf("%lf", &num1);
     printf("enter the second number:");
    scanf("%lf", &num2);

    printf("the addition of %f and %f is %f", num1, num2, num1 + num2);
}