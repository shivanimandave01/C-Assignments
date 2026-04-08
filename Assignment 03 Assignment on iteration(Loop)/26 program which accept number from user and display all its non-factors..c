#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,i = 0;

    printf("\n Enter a Number :");
    scanf("%d",&No);

    printf("\n The Non Fators of %d are :",No);

    for(i = No;i >= 1;i--)
    {
        if(No % i != 0)
        {
            printf("%d,",i);
        }
    }
    getch();
    return 0;
}