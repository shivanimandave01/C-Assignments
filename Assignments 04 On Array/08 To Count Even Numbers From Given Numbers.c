#include<stdio.h>
#include<conio.h>
#define Size 9

int main()
{
    int Number[Size] = {},Even_Count = 0,i = 0;

    for(i = 0;i < Size;i++)
    {
        printf("\n Enter a %d Number :",i+1);
        scanf("%d",&Number[i]);

        if(Number[i] % 2 == 0)
        {
            Even_Count++;
        }
    }
    printf("\n Even Numbers are %d from given Numbers. ",Even_Count++);

    getch();
    return 0;
}
