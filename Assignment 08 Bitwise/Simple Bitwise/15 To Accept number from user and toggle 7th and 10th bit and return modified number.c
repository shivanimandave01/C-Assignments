#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n Enter the Number :");
    scanf("%d",&Num);

    if(Num & (1 << 6))
    {
        Num = Num ^ (1 << 6);
    }

    if(Num & (1 << 9))
    {
        Num = Num ^ (1 << 9);
    }

    printf("\n Modified number of given number : %d", Num);

    getch();
    return 0;
}
