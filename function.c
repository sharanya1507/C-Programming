// void ---> its not going to return anything
// main ---> its important function bcz c program 1st call this then other defined functions will be called inside this main fundction.
// () -----> parameter is an value given to the function
#include<stdio.h>
#include<stdlib.h>

void mylife();
void sayHi(int age, char city[]);

int main(){
    mylife();
    sayHi(2,"Shimoga");
    return 0;
}

void mylife(){
    printf("hello kitty ");
}

void sayHi(int age, char city[]){
    printf("your age is %d and your city is %s", age, city );
}