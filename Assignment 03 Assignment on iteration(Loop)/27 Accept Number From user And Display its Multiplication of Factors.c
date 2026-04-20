#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,Fact = 0,i = 0,Mul = 1;

    printf("\n Enter any Number :");
    scanf("%d",&No);

    for(i = 1;i <= No;i++)
    {
        if(No % i == 0)
        {
        Mul = Mul * i;
        }
    }
    printf("\n Multiplicatioin is %d",Mul);

    getch();
    return 0;
}
