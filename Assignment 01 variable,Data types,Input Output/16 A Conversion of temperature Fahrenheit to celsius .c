//Covert Fahrenheit to Celsius//
#include<stdio.h>
#include<conio.h>

int main()
{
    float  Fht= 0,Cels= 0;
    
     printf("\nEnter Temperature in Fahrenheit:");
     scanf("%f",&Fht);
     
     Cels = ((Fht -32 )* 5.0/9.0);
     
     printf("\n Temperature of %0.2f Fahrenheit into celsius is = %0.2f", Fht,Cels);
    
    getch();
    return 0;
}