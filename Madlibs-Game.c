    #include<stdlib.h>
    #include<stdio.h>

    int main()
    {
        char colour[20];
        char materials[20];
        char celebrityF[20];
        char celebrityL[20];

        printf("Enter the Colour:");
        scanf("%s", colour);
        printf("Enter the Materials:");
        scanf("%s", materials);
        printf("Enter the Celebrity:");
        scanf("%s %s", celebrityF, celebrityL);



        printf("Roses are %s \n", colour);
        printf("%s are blue \n", materials);
        printf("I Love %s %s \n", celebrityF, celebrityL);

        return 0;
    }