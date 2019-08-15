#include<stdio.h>
#include<stdlib.h>
#include <string.h> 

int main()
{
    FILE *fp;
    char name[50];
    int roll_no, chars, i, n;
    float marks;
 
    fp = fopen("records.txt", "w");
 
    if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
 
    printf("Testing fprintf() function: \n\n");
 
    printf("Enter the number of records you want to enter: ");
    scanf("%d", &n);
 
    for(i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("\nEnter the details of student %d \n\n", i +1);
 
        printf("Enter name of the student: ");
        gets(name);
 
        printf("Enter roll no: ");
        scanf("%d", &roll_no);
 
        printf("Enter marks: ");
        scanf("%f", &marks);
 
        chars = fprintf(fp, "Name: %s\t\tRoll no: %d\t\tMarks: %.2f\n",
            name, roll_no, marks);
      // printf("\n%d characters successfully written to the file\n\n", chars);
    }
 
    fclose(fp);
    return 0;
}