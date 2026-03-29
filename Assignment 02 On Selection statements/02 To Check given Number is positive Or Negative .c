#include<stdio.h>
#include<conio.h>

int main()
{
    int N = 0;
    
    printf("\nEnter value of number  :");
    scanf("%d",&N);
    
    if(N>0)
    { 
        printf("\nThe given number is positive");
    }
    else 
    {
        printf("\nThe given number is negative");
    }
    getch();
    return 0;
}
