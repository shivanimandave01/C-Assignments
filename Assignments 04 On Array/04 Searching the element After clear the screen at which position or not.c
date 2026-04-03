#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 7

int main()
{
    int Bill[size] = {},i = 0,Ele = 0;

    for(i = 0;i < 7;i++)
    {
        printf("\n Enter Values of %d Number : ",i+1);
        scanf("%d",&Bill[i]);
    }
    getch();
    system("cls");

    printf("\n Enter a searching element : " );
    scanf("%d",&Ele);

    for(i = 0;i < size;i++)
    {
        if(Ele == Bill[i])
        {
            break;
        }
    }
    if(i < size)
    {
        printf("\n Element %d is found at index %d ",Ele,i);
    }
    else
    {
        printf("\n Element not Found");
    }
    getch();
    return 0;
}
