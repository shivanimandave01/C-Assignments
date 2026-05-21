#include<stdio.h>
#include<conio.h>

long long int Square(int No);

long long int Cube(int No);

int main()
{
    int No = 0;
    long long int Sq = 0,Cu = 0;

    printf("\n Enter a Number :");
    scanf("%d",&No);

    Sq = Square(No);

    Cu = Cube(No);

    printf("\n Square of Given Number %d is %lld .",No,Sq);

    printf("\n Cube of Given Number %d is %lld",No,Cu);

    getch();
    return 0;
}
long long int Square(int Num)
{
    long long int Result = 1;


    for(int i = 1;i <= 2;i++)
    {
        Result = Result * Num;
    }

    return Result;
}
long long int Cube(int Num)
{
    long long int Result = 1;

    for(int i = 1;i <= 3;i++)
    {
        Result = Result * Num;
    }

    return Result;
}
