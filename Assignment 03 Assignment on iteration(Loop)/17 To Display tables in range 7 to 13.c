#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,i = 0;

    for(i = 1;i <= 10;i++)
    {
        for(No = 7;No <= 13;No++)
     {
            printf(" %3d ",No*i);
     }
    printf("\n");
    }
    getch();
    return 0;
}
