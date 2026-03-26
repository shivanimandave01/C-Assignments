#include<stdio.h>
#include<conio.h>

int main()
{
    int N = 0;
    
    printf("\nEnter value of number  :");
    scanf("%d",&N);
    
    if(N <= 10)
    { 
        printf("\n Hello");
    }
    else 
    {
        printf("\n World");
    }
    getch();
    return 0;
}
