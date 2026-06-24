#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0,No[i] = {},Sum = 0;

    while(1)
    {
        printf("\n Enter %d Number :",i+1);
        scanf("%d",&No[i]);

        if(No[i] < 1 || No[i] == 0)
        {
            break;
        }
        Sum = Sum + No[i];
        i++;
    }
    printf("\n Addition of Numbers are: %d",Sum);

    getch();
    return 0;
}
