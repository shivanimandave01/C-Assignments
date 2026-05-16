#include<stdio.h>
#include<conio.h>

int main()
{
    long long int Num = 0;
    int Dig = 0,E_Sum = 0,O_Sum,Sum_Tn = 0;


    printf("\n Enter a Number :");
    scanf("%lld",&Num);

    while(Num != 0)
    {
        Dig = Num % 10;

        if(Dig % 2 == 0)
        {
            E_Sum = E_Sum + Dig;
        }
        else
        {
            O_Sum = O_Sum + Dig;
        }

        Num = Num / 10;
    }

    Sum_Tn = E_Sum - O_Sum;

    printf("\n Difference Between Summation of Even Digit And Summation of Odd Digit is %d",Sum_Tn);

    getch();
    return 0;
}
