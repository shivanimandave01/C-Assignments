#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 1,Number = 0, Maxno = 0;

    while(Cnt <= 7)
    {
        printf("\n Enter %d Number: ",Cnt);
        scanf("%d",&Number);
        
        if(Cnt == 1 || Number > Maxno)
        {
            Maxno = Number;
        }
        Cnt++;
    }
    printf("\nMaxno = %d",Maxno);
    
    getch();
    return 0;
}
    