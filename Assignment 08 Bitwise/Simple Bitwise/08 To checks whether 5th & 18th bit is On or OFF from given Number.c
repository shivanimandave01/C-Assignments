#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter a Number :");
    scanf("%d",&No);

    if(((No & (1 << 4)) != 0) && ((No & (1 << 17)) != 0))
    {
        printf("\n Both 5th And 18th Bit is On");
    }
    else if(((No & (1 << 4)) != 0))
    {
        printf("\n 5th Bit is On And 18th Bit is Off");
    }
    else if((No & (1 << 17)) != 0)
    {
        printf("\n 18th Bit is On and 5th Bit is Off");
    }
    else
    {
        printf("\n Both 5th and 18th Bit is Off");
    }
    getch();
    return 0;
}
