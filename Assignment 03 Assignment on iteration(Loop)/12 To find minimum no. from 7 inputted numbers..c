#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 1,Number = 0,Minno = 0;
    
    for(Cnt = 1; Cnt < 7; Cnt++)
    {
        printf("\nEnter Any number :");
        scanf("%d",&Number);
        
        if(Cnt == 1 || Number < Minno)
        {
            Minno = Number;
        }
    }
    printf("\n\n Minimum number is = %d", Minno);
    
    getch();
    return 0;
}
    