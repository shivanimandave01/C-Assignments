#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int No[size] ={},i = 0,Max = 0,Min = 0;

    for(i = 0;i <= size;i++)
    {
        printf("\n Enter %d Number :",i+1);
        scanf("%d",&No[i]);

        if(i == 0 || No[i] > Max)
        {
            Max = No[i];
        }
        if(i == 0 || No[i] < Min)
        {
            Min = No[i];
        }
    }
    printf("\n Maximum Number from given Numbers are: %d ",Max);
    printf("\n Manimum Number from given Numbers are: %d ",Min);

    getch();
    return 0;
}
