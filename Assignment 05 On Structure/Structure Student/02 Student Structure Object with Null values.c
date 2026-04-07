#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Students
{
    int Roll_No;
    char Name[20];
    float Percentage;
};

int main()
{
    struct Students S1 ={};

    printf("\n Enter Student Roll_No = %d",S1.Roll_No);
    printf("\n Enter Student Name = %s",S1.Name[20]);
    printf("\n Enter Student Percentage = %f",S1.Percentage);

    getch();
    return 0;
}
