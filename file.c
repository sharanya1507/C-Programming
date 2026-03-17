#include<stdlib.h>
#include<string.h>
#include<stdio.h>

int main() {
    // writing to a file ---> "w"
    FILE *fpointer = fopen("C:\\Users\\Sharanya M Kumar\\OneDrive\\Desktop\\C Programming\\employee.txt", "w");
    // overwrite the file if it already exists, otherwise create a new file
    fprintf(fpointer, "Name: Sharanya M Kumar\n");
    fprintf(fpointer, "Age: 22\n");
    fprintf(fpointer, "Department: Computer Science\n");
    fclose(fpointer);

    // appending to a file ---> "a"
    fpointer = fopen("C:\\Users\\Sharanya M Kumar\\OneDrive\\Desktop\\C Programming\\employee.txt", "a");
    fprintf(fpointer, "Salary: $50000\n");
    fclose(fpointer);

    // reading from a file ---> "r"
    char line[100];
    fpointer = fopen("C:\\Users\\Sharanya M Kumar\\OneDrive\\Desktop\\C Programming\\employee.txt", "r");
    fgets(line, 100, fpointer);
     printf("%s", line);
     fgets(line, 100, fpointer);
    printf("%s", line);

    // print all the lines in the file
    while(fgets(line, 100, fpointer) != NULL) {
        printf("%s", line);
    }
    fclose(fpointer);

}