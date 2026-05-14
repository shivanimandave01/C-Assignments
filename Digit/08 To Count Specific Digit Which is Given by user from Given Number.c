#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0,Temp= 0,Dig = 0,Cnt = 0,Dig_Cnt = 0;

    printf("\n Enter a Number:");
    scanf("%d",&Num);

    printf("\n Which Number Will be Count:");
    scanf("%d",&Dig_Cnt);

    Temp = Num;

    while(Temp != 0)
    {
        Dig = Temp % 10;

        if(Dig == Dig_Cnt)
        {
            Cnt++;
        }
        Temp /= 10;
    }
    printf("\n Count of %d in Given Number %d is %d.",Dig_Cnt,Num,Cnt);

    getch();
    return 0;
}
