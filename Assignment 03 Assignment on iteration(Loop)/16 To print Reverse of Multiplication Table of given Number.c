#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,i = 0;

    printf("\n Enter any Number : ");
    scanf("%d",&No);

    for(i = 10;i >= 1;i--)
    {
        printf("\n %d * %2d = %d",No,i,No*i);
    }
    getch();
    return 0;
}
