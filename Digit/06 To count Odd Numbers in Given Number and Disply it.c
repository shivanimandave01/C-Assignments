#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,Temp = 0,Dig = 0,Cnt_odd = 0;

    printf("\n Enter any Number : ");
    scanf("%d",&No);

    Temp = No;

    while(Temp != 0)
    {
        Dig = Temp % 10;

        if(Dig % 2 == 1)
            {
                Cnt_odd++;
            }
        Temp = Temp / 10;
    }
    printf("\n The Odd number count in given %d is = %d",No,Cnt_odd);

    getch();
    return 0;

}
