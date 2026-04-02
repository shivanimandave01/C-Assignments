#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,Temp = 0,Dig = 0,Cnt_zero = 0;

    printf("\n Enter any Number : ");
    scanf("%d",&No);

    Temp = No;

    while(Temp != 0)
    {
        Dig = Temp % 10;

        if(Dig == 0)
            {
                Cnt_zero++;
            }
        Temp = Temp / 10;
    }
    printf("\n Zeros count in given %d is = %d",No,Cnt_zero);

    getch();
    return 0;

}
