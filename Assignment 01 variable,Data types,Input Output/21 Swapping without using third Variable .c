#include <stdio.h>
#include <conio.h>

int main()
{  
   int N1 = 0,N2 = 0;
   
   printf("\n Enter 1st Number Value =");
   scanf("d",&N1);
   
   printf("\n Enter 2nd Number Value =");
   scanf("d",&N2);
   
    printf("\n Value of Number Before swapping N1=%d,N2=%d",N1,N2);
    
    N1=N1+N2;
    N2=N1-N2;
    N1=N1-N2;
    
    printf("\n Value of Number Before swapping N1=%d,N2=%d",N1,N2);
    
   getch();
   return 0;   
   
}