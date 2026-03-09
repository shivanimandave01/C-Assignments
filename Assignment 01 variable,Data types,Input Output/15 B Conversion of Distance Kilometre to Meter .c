//Convert KM to Meter//
#include<stdio.h>
#include<conio.h>

int main()
{
    float  KM = 0,Meter = 0;
    
     printf("\nEnter Distance in KM :");
     scanf("%f",&KM);
     
     Meter = KM * 1000;
     
     printf("\n Distance of %0.2f KM in meter is = %0.2f", KM,Meter);
    
    getch();
    return 0;
}