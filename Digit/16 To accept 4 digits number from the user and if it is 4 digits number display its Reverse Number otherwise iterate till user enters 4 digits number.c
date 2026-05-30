#include<stdio.h>
#include<conio.h>

int main()
{
    short int Cnt = 0,3Dig = 0;
    int Num = 0,Temp = 0,Rev = 0;

    up:

    printf("\n Enter a 4 digit Number :");
    scanf("%d",&Num);

    Temp = Num;

    while(Temp != 0)
    {
        Cnt++;
        Temp /= 10;
    }

    Temp = Num;

    if(Cnt == 4)
    {
        while(Temp != 0)
        {
            Dig = Temp % 10;
            Rev = (Rev * 10) + Dig;
            Temp /= 10;
        }
    }

     else
     {
        goto up;
     }

     printf("\n Given Number %d have 4 Digits and Reverse of This Number is %d.",Num,Rev);

     getch();
     return 0;

}
