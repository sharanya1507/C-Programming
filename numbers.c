#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//  %f for float, double (all boolean numbers)
int main()
{
    printf("%f \n", 4.567);
    printf("%f \n", 4.5 + 5.0); // we can do sub(-), div(/), multiplication(*)
    printf("%f \n", 5/2); // 0.000000
    printf("%d \n", 5/2); // 2
    printf("%f \n", 5/2.0); //2.500000

    int num = 4;
    printf("%d \n", num);

    printf("%f \n", pow(2,3)); // 8.000000, must need package #include<math.h>
    printf("%f \n", sqrt(36));
    printf("%f \n", ceil(36.356)); // ceiling(heigest number)
    printf("%f \n", floor(36.356)); // (roundfigure number)

//constants
    int num1 = 4;
    printf("%d \n", num1);

    num1 = 2; // once the variable is declared no need to declare it again.
    printf("%d", num1);

    const int NUM1 = 4; //  int const num1 = 4; -------> this is also possible
    printf("%d \n", num1);
    //assignment of read-only variable 'num1' 
    num1 = 2; // once the variable is declared no need to declare it again.
    printf("%d", num1);

}