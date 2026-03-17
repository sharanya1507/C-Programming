#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    int secretnumber = 8;
    int guess = 0;
    int guesscount = 0;
    int guesslimit = 3;
    int outofguess = 0;


    while (guess != secretnumber && outofguess==0)
    
    {
        if (guesscount < guesslimit)
        {
           
        printf("Enter the number: ");
        scanf("%d", &guess);
        guesscount++;
        }else{
            outofguess =1;
        }
        }
        
        if (outofguess ==1){
            printf("out of guesses");
        }
        else{
                printf("You Won!\n");
        }
        
    

    
}