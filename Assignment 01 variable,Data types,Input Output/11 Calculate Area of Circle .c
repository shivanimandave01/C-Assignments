//Area of Circle//
#include<stdio.h>
#include<conio.h>

int main()
{
    int Radius;
    float Area, PI = 3.14;
    
     printf("\nEnter any radius value :");
     scanf("%d",&Radius);
     
     Area =  PI * Radius * Radius;
     printf("\nArea of Circle :%f", Area);
    
    getch();
    return 0;
}