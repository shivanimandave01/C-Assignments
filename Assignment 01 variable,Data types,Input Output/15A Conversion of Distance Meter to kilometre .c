//Convert Meter to KM//
#include<stdio.h>
#include<conio.h>

int main()
{
    float  KM = 0,Meter = 0;
    
     printf("\nEnter Distance in Meter :");
     scanf("%f",&Meter);
     
     KM = Meter / 1000;
     
     printf("\n Distance of %0.2f Meter in KM is = %0.2f", Meter,KM);
    
    getch();
    return 0;
}