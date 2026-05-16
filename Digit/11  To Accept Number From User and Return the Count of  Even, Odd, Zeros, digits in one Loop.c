#include<stdio.h>
#include<conio.h>

int main()
{
    long long int Num = 0;
    int Temp = 0,ECnt = 0,OCnt = 0,ZCnt = 0,Dig = 0;

    printf("\n Enter a Number:");
    scanf("%lld",&Num);

    Temp = Num;

    while(Temp != 0)
    {

        Dig = Temp % 10;

        if(Dig % 2 == 0 && Dig != 0)
        {
            ECnt++;
        }
        else if(Dig == 0)
        {
            ZCnt++;
        }
        else
        {
            OCnt++;
        }


        Temp /= 10;
    }

    printf("\n In %d Number \n Even Numbers are %d Times \n Odd Numbers are %d Times \n Zero are %d Times",Num,ECnt,OCnt,ZCnt);

    getch();
    return 0;
}
