#include<stdio.h>
#include<conio.h>
#define size 4

int main()
{
    int Num[size] = {},Cnt_Zero = 0,i = 0;

    for(i = 0;i < size;i++)
    {
        printf("\n Enter %d Number :",i+1);
        scanf("%d",&Num[i]);

        if(Num[i] == 0)
        {
            Cnt_Zero++;
        }
    }
    printf("\n Count of Zero in given Numbers are %d",Cnt_Zero);

    getch();
    return 0;
}
