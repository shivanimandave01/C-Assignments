#include<stdio.h>

int main()
{
    int no1 = 0,no2 = 0,multi = 0;
    
    printf("Enter any two values :");
    
    printf("\nEnter value of number 1 :");
    scanf("%d",&no1);
    
    printf("\nEnter value of number 2 :");
    scanf("%d",&no2);
    
    multi= no1 * no2;
    printf("Multiplication of given number is =%d",multi);
    return 0;
}