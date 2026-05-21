#include<stdio.h>
#include<conio.h>

long long int Multiplier(int No1,int No2,int No3);

int main()
{
    int No1 = 0,No2 = 0,No3 = 0;
    long long int Result = 1;

    printf("\n Enter Base Number :");
    scanf("%d",&No1);

    printf("\n Enter Exponent  Number :");
    scanf("%d",&No2);

    printf("\n Enter 2nd Exponent Number :");
    scanf("%d",&No3);

    Result = Multiplier(No1,No2,No3);

    printf("\n (%d ^ %d) ^ %d = %lld",No1,No2,No3,Result);

    getch();
    return 0;
}
long long int Multiplier(int Num1,int Num2,int Num3)
{
    int Temp = 0;
    long long int Result = 1;

    Temp = Num2;

    while(Num3 != 0)
    {
        while(Num2 != 0)
        {
            Result = Result * Num1;

            Num2--;
        }

        Result = Result * Temp;

        Num3--;
    }
    return Result;
}
