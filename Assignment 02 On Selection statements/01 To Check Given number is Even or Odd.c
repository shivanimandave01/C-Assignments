#include<stdio.h>
#include<conio.h>

int main()
{
    int N = 0;
    
    printf("\nEnter value of number  :");
    scanf("%d",&N);
    
    if(N%2==0)
    { 
    printf("\nGiven Number is Even");
    }
    else 
    {
    printf("\nGiven number is Odd");
    }
    getch();
    return 0;
}