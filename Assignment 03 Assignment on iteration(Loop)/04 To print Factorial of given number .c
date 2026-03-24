#include<stdio.h>
#include<conio.h>

int main()
{  
    int No = 0,Temp = 0;
    long long int fact = 1;
    
    printf("\n Enter a Number ");
    scanf("%d",&No);
    
    for(Temp = No;Temp >= 1;Temp--)
    {
        fact = fact * Temp;
    }
    printf("\nFactorial of %d is = %d",No,fact);
   
    getch();
    return 0;   
   
}