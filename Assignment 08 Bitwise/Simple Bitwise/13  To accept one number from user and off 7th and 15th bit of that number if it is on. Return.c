#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n Enter a Number :");
    scanf("%d",&Num);

    if((Num & (1 << 6)) != 0)
    {
        Num = Num & (~(1 << 6));

        printf("\n Modified number after 7 th bit is off = %d",Num);
    }

    else
    {
        printf("\n 7th Bit is Off");
    }

    if((Num & (1 << 9)) != 0)
    {
        Num = Num & (~(1 << 9));

        printf("\n Modified number after 10 th bit is off = %d",Num);
    }

    else
    {
        printf("\n 10th Bit is Off");
    }

    getch();
    return 0;
}
