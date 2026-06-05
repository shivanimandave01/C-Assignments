#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&Num);

    if(((Num & (1 << 6)) != 0) && ((Num & (1 << 7)) != 0) && ((Num & (1 << 8)) != 0))
    {
        printf("\n 7th,8th and 9th bit are On in given Number %d.",Num);
    }

    else if(((Num & (1 << 6)) != 0) && ((Num & (1 << 7)) != 0))
    {
        printf("\n 7th and 8th bit are On and 9th bit is Off in Given Number %d.",Num);
    }

    else if(((Num & (1 << 7)) != 0) && ((Num & (1 << 8)) != 0))
    {
        printf("\n 8th and 9th bit are On in Given Number %d.",Num);
    }

    else if((Num & (1 << 6)) != 0)
    {
        printf("\n Only 7th bit is On in given %d Number.",Num);
    }

    else if((Num & (1 << 7)) != 0)
    {
        printf("\n Only 8th Bit is On in given Number %d",Num);
    }

    else if((Num & (1 << 8)) != 0)
    {
        printf("\n Only 8th Bit is On in given Number %d",Num);
    }
    else
    {
        printf("\n All 7th,8th and 9th Bit is Off in given Number %d.",Num);
    }

    getch();
    return 0;
}
