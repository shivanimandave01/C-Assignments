//Circumference of Circle//
#include<stdio.h>
#include<conio.h>

int main()
{
    int Radius;
    float Circumference, PI = 3.14;
    
     printf("\nEnter any radius value :");
     scanf("%d",&Radius);
     
     Circumference = 2* PI * Radius;
     printf("\nCircumference of Circle :%f", Circumference);
    
    getch();
    return 0;
}