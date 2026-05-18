#include<stdio.h>
#include<conio.h>

short int Dig_Cnt(long long int);
short int Dig_Sum(long long int);

int main()
{
    short int Cnt = 0,Sum = 0;
    long long int Num = 0;

    printf("\n Enter A Valid Mobile Num:");
    scanf("%lld",&Num);

    Cnt = Dig_Cnt(Num);

    if(Cnt == 10)
    {
        Sum = Dig_Sum(Num);

        if(Sum % 2 == 0)
        {
            printf("\n Get Well Opportunities");
        }
        else
        {
            printf("\n Take Care");
        }
    }
     else
     {
        printf("\n Invalid Mobile Number.");
    }
    getch();
    return 0;
}
    short int Dig_Cnt( long long int No)
{
    int dCnt = 0;

    while(No != 0)
    {
        dCnt++;
        No /= 10;
    }
    return dCnt;
}
    short int Dig_Sum(long long int No)
{
    int dSum = 0;

    while(No != 0)
    {
        dSum = dSum + (No % 10);
        No /= 10;
    }
    return dSum;
}






