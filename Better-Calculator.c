#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    double num1;
    double num2;
    char op;

    printf("Enter the 1st number:\n");
    scanf("%lf", &num1);
    printf("Enter thje operator:\n");
    scanf(" %c", &op);
    printf("Enter the 2nd number:\n");
    scanf("%lf", &num2);

    if (op == '+'){
        printf("%lf", num1+num2);
    }else if(op == '-'){
         printf("%lf", num1-num2);
    }else if(op == '/'){
         printf("%lf", num1/num2);
    }else if(op == '*'){
         printf("%lf", num1*num2);}     
}