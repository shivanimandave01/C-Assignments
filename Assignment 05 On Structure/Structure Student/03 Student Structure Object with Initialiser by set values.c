#include<stdio.h>
#include<conio.h>

struct Student
{
    int Roll_No;
    char Name[30];
    float Percentage;
};

int main()
{
    struct Student S1= {101,"Ram",87.20};

    printf("\n Student Roll Number = %d",S1.Roll_No);
    printf("\n Student Name = %s",S1.Name);
    printf("\n Student Percentage = %0.2f",S1.Percentage);

    getch();
    return 0;

    }
