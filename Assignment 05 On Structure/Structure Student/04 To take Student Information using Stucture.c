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
    struct Student S1 = {};

     printf("\n Enter Roll Number of Student =");
     scanf("%d",&S1.Roll_No);

     printf("\n Enter Name of Student =");
     scanf("%s",&S1.Name);

     printf("\n Enter Percentage of Student =");
     scanf("%f",&S1.Percentage);

      printf("\n Roll Number of Student = %d",S1.Roll_No);
      printf("\n Name of Student = %s",S1.Name);
      printf("\n Percentage of Student = %f",S1.Percentage);

      getch();
      return 0;

}
