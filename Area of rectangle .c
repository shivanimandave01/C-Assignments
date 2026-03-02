//Area of Rectangle//
#include<stdio.h>
#include<conio.h>

int main()
{
    int Height = 0, Width = 0, Area;
    
     printf("\nEnter value of width :");
     scanf("%d",&Width);
     
     printf("\nEnter value of height :");
     scanf("%d",&Height);
     
     Area = Width * Height;
     printf("\nArea of Rectangle is=%d",Area);
    
    getch();
    return 0;
}