#include<stdio.h>
#include<stdlib.h>

int main() {
    char name[] = "meme";
    char *pName = name;
    int grade = 100;
    int *pGrade = &grade;
    double gpa = 4.0;
    double *pGpa = &gpa;

    printf("name:%p\n grade:%p\n gpa:%p\n", &name, &grade, &gpa);
    printf("pName:%p\n pGrade:%p\n pGpa:%p\n", pName, pGrade, pGpa);
    return 0;
}