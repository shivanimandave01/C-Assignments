#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0,Res = 0;

    printf("\n Enter a Number :");
    scanf("%d",&Num);

    Res = ~ Num;

    printf("\n ~ %d = %d",Num,Res);

    getch();
    return 0;
}
