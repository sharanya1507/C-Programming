#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){

    int array[3][2] = {
        {1,2},
        {3,4},
        {5,6}
    };
    printf("2D array %d\n", array[2][1]);


    int run[3][2] = {
        {1,2},
        {3,4},
        {5,6}
    };
    printf("nested for loop:\n");
    int i, j;
    for (i =0; i<3;i++)
    {
        for( j = 0; j < 2; j++)
        {
            
            printf("%d,", run[i][j]);
        }
        printf("\n");
        
    }
    
}