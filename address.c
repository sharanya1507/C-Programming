#include<stdlib.h>
#include<stdio.h>

int main(){
    char name[] = "meme";
    int grade = 100;
    double gpa = 4.0;

    printf("name:%p\n", &name);
    printf("grade:%p\n", &grade);
    printf("gpa:%p\n", &gpa);
    return 0;

}