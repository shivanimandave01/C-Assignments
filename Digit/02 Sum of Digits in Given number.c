#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,DigSum = 0,Dig = 0,Temp = 0;

    printf("\n Enter any Number :" );
    scanf("%d",&No);

    Temp = No;

    while(Temp != 0)
    {
        Dig = Temp % 10;
        DigSum = DigSum + Dig;
        Temp = Temp / 10;
    }
    printf("\n Sum of Digits in given Number %d is = %d",No,DigSum);

    getch();
    return 0;
}
