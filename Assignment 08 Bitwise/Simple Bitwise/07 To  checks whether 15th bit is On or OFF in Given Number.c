#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    if((No & (1 << 14)) != 0)
    {
        printf("\n 15th Bit is On.");
    }
    else
    {
        printf("\n 15th Bit is Off.");
    }
    getch();
    return 0;
}
