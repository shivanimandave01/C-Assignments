#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct Info
{
    int Roll_No;
    char Name[30];
    float Percentage;
    long long int Mobile_No;
};

int main()
{
    int Cnt_Stud,i;
    struct Info Stud[Cnt_Stud] = {};


    printf("\n Enter How Many Student Information do you want Store : ");
    scanf("%d",&Cnt_Stud);


    for(i = 0;i < Cnt_Stud;i++)
    {
        printf("\n\n Enter %d Student Roll Number : ",i+1);
        scanf("%d",&Stud[i].Roll_No);

        printf("\n Enter %d Student Name : ",i+1);
        scanf("%s",&Stud[i].Name);

        printf("\n Enter %d Student Percentage : ",i+1);
        scanf("%f",&Stud[i].Percentage);

        printf("\n Enter %d Student Mobile_No : ",i+1);
        scanf("%lld",&Stud[i].Mobile_No);

        printf("\n ---------- *** -------- *** -------- *** -----------");
    }

   system("cls");

    printf("\n\n Roll Number \t Name \t Percentage \t Mobile Number");

     for(i = 0;i < Cnt_Stud;i++)
     {
        printf(" \n\n %d \t\t %s \t%0.2f \t\t %lld ", Stud[i].Roll_No,Stud[i].Name,Stud[i].Percentage,Stud[i].Mobile_No);
     }

     getch();
     return 0;
}
