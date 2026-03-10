#include<stdio.h>
#include<stdlib.h>

int cube(int User){
    return User*User*User;
    printf("hello");  // this is not going to print bc retun statement will break the line and come out of the function.
}
int main()
{
    int User;
    printf("enter the number:\n");
    scanf("%d", &User);
    printf("the cube of the number %d, is %d", User, cube(User));
}