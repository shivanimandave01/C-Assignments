#include<stdio.h>
#include<conio.h>
#define size 6

int main()
{
    int Values[size] = {},i = 0,Min_No = 0;

    for(i = 0;i < size; i++)
    {
    printf("\n Enter the %d Number : ",i+1);
    scanf("%d",&Values[i]);

    if(i == 0 || Min_No > Values[i])
    {
        Min_No = Values[i];
    }
    }
    printf("\n Minimum Number is %d ",Min_No);

    getch();
    return 0;
}
