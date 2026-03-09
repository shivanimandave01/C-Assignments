#include<stdio.h>
#include<conio.h>

int main()
{
    int no1,no2,sum;
    printf("\n\tEnter the number");
    scanf("%d",&no1);
    
    printf("\n\tEnter the number");
    scanf("%d",&no2);
    
    sum=no1+no2;
    
    printf("Addition of %d%d=%d",no1,no2,sum);
    
    getch();
    return 0;
}