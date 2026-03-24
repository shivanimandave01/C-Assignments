#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0, Number = 0, Total = 0;

    for(Cnt = 1;Cnt <= 10;Cnt++)
    {
        printf("\n Enter %d Number ",Cnt);
        scanf("%f",&Number);
        Total =  Total + Number;
    }
    printf("\nTotal = %f",Total);
    
    getch();
    return 0;
}
    