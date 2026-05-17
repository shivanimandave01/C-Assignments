#include<stdio.h>
#include<conio.h>

int main()
{
    long long int Num = 0,Temp = 0;
    short int Min_Dig = 0,Dig = 0;

    printf("\n Enter a Number : ");
    scanf("%lld",&Num);

    Temp = Num;

    while(Temp != 0)
    {
        Dig = Temp % 10;

        if((Temp == Num )|| (Dig < Min_Dig))
        {
            Min_Dig = Dig;
        }

        Temp /= 10;
    }

    printf("\n Minimum digit in Given %lld Number is %i",Num,Min_Dig);

    getch();
    return 0;
}
