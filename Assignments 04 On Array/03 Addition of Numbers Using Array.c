#include<stdio.h>
#include<conio.h>

int main()
{
    int Number[10] = {},i = 0,Sum = 0;

    for(i = 0;i < 10;i++)
    {
        printf("\n Enter value  of %d Number : ",i+1);
        scanf("%d",&Number[i]);

        Sum = Sum + Number[i];
    }
    printf("\n Addition of All Numbers is : %d",Sum);

    getch();
    return 0;
}
