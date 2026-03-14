#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct Student
{
    char name[20];
    char major[20];
    int age;
    double cgpa;
}; // now i have created a student data table

int main(){
    struct Student Student1; // created a container called Student1
    Student1.age=22;
    Student1.cgpa=8.5;
    // Student1.name = "dasjd"; -----> this cant be done, bcz its an arry which can't store strings directly.
    strcpy( Student1.name, "Bilu"); 
    strcpy( Student1.major, "Business"); 
    
    printf("%s\n", Student1.name);
    printf("%s\n", Student1.major);
    printf("%d\n", Student1.age);
    printf("%lf\n\n", Student1.cgpa);


    struct Student Student2; // created a container called Student2
    Student2.age=32;
    Student2.cgpa=4.5;
    strcpy( Student2.name, "Chichi"); 
    strcpy( Student2.major, "arts"); 
    
    printf("%s\n", Student2.name);
    printf("%s\n", Student2.major);
    printf("%d\n", Student2.age);
    printf("%lf\n",Student2.cgpa);

    

}
