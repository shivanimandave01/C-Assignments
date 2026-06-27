#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0,Rev = 0,Dig = 0;

    printf("\n Enter a Number :");
    scanf("%d",&Num);

    while(Num != 0)
    {
        Dig = Num % 10;
        Rev = (Rev * 10) + Dig;
        Num = Num / 10;
    }
    printf("\n Digits in this Number Are =>");

    while(Rev != 0)
    {
        Dig = Rev % 10;

        printf("\n %d",Dig);


        Rev = Rev /10;
    }
    getch();
    return 0;
}
