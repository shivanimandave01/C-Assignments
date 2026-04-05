#include<stdio.h>
#include<conio.h>
#define Size 7

int main()
{

    int Number[Size] = {},Odd_Cnt,i = 0;

    for(i = 0;i < Size;i++)
    {
        printf("\n Enter %d Number ",i+1);
        scanf("%d",&Number[i]);

        if(Number[i] % 2 == 1)
        {
            Odd_Cnt++;
        }
    }
    printf("\n Odd Numbers Count is %d.",Odd_Cnt);

    getch();
    return 0;
}
