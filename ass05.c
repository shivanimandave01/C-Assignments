#include<stdio.h>

int main()
{
    int radius;
    float Area;
    
     printf("Enter any radius value :");
     scanf("%d",&radius);
     
     Area = 3.14*radius*radius;
     printf("Area of Circle :%f",Area);
    
    return 0;
}