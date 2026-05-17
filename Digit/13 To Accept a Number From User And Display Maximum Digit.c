#include<stdio.h>
#include<conio.h>

int main()
{
    long long int Num = 0,Temp = 0;
    short int Max_Dig = 0,Dig = 0;

    printf("\n Enter a Number : ");
    scanf("%lld",&Num);

    Temp = Num;

    while(Temp != 0)
    {
        Dig = Temp % 10;

        if((Temp == Num )|| (Dig > Max_Dig))
        {
            Max_Dig = Dig;
        }

        Temp /= 10;
    }

    printf("\n MAximum digit in Given %lld Number is %i",Num,Max_Dig);

    getch();
    return 0;
}
