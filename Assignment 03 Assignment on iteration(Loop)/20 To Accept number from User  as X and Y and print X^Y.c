#include<stdio.h>
#include<conio.h>

int main()
{
    int X = 0,Y = 0,Result = 1,Temp = 0;

    printf("\n Enter Number : ");
    scanf("%d",&X);

    printf("\n Enter Number for rest to : ");
    scanf("%d",&Y);

    Temp = Y;

    while(Temp >= 1)
        {
                Result = Result * X;
                Temp--;
        }
    printf("\n %d^%d = %d",X,Y,Result);

    getch();
    return 0;
    }
