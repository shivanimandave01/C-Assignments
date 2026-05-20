#include<stdio.h>
#include<conio.h>

int Factorial (int);

int main()
{
    int No = 0,fact = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    fact = Factorial(No);

    printf("\n Factorial of given Number %d is %d",No,fact);

    getch();
    return 0;
}
int Factorial (int Num)
{
    int Fact = 1;

    while(Num != 0)
    {
        Fact = Fact * Num;

        Num--;
    }

    return Fact;
}
