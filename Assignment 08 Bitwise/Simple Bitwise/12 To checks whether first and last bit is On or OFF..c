#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    if(((No & (1 << 1)) != 0) && ((No & (1 << 31)) != 0))
    {
    printf("Bit 1 And Bit 31 is On in Given Number %d.",No);
    }
    else if(No & (1 << 1) != 0)
    {
        printf("\n Bit 1 is on and Bit 31 is Off in Given Number %d",No);
    }
    else if(No & (1 << 31) != 0)
    {
        printf("\n Bit 31 is On and Bit 1 is off in Given Number %d",No);
    }
    else
    {
        printf("\n Both 1st Bit And 31th Bit is Of in Given Number %d",No);
    }

    getch();
    return 0 ;
}
