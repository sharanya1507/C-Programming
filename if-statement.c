#include<stdio.h>
#include<stdlib.h>

int Max(int num1, int num2){
    if (num1 > num2){
        return num1;
    }
    else{
        return num2;
    }
}

double Maxx(double n1, double n2, double n3){
if (n1>=n2 && n1>=n3){
    return n1;
} else if (n2>=n1 && n2>=n3){
    return n2;
} else {
    return n3;
}

}

int main(){
    printf("the highest value is %d\n", Max(100,20));
    printf("the highest value is %lf\n", Maxx(20.6,20.5,20.2));
    

if (5<4 || 5<2){
        printf("true\n");
    }
    else{
        printf("false\n");
    }

if (5 == 5){
    printf("true\n");
}

if (5!=5){
    printf("false\n");
}
}