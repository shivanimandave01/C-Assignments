#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0,i = 0;

    printf("\n Enter any Number :");
    scanf("%d",&Num);

    for(i = 1;i <= Num;i++)
    {
        printf("  *");

        if(i % 10 == 0)
        {
            printf("\n");
        }
    }
    getch();
    return 0;
}
