#include<stdio.h>
#include<conio.h>

int main()
{
    short int Multi = 1;
    int Num = 0,Temp = 0;

    printf("\n Enter a Number :");
    scanf("%d",&Num);

    Temp = Num;

    while(Temp != 0)
    {
        Multi = Multi * (Temp % 10);

        Temp /= 10;
    }
    printf("\n Multiplication of Digits From Given Number %d is = %d.",Num,Multi);

    getch();
    return 0;
}
