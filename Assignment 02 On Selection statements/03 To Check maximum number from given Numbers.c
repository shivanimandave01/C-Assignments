#include<stdio.h>
#include<conio.h>

int main()
{
    int N1 = 0,N2 = 0;
    
    printf("\nEnter value of number N1 :");
    scanf("%d",&N1);
    
    printf("\nEnter value of number N2 :");
    scanf("%d",&N2);
    
    if(N1 > N2)
    { 
    printf("\nThe Greater Number Is =%d",N1);
    }
    else
    {
    printf("\nThe Greater Number Is =%d",N2);
    }
    
    getch();
    return 0;
}