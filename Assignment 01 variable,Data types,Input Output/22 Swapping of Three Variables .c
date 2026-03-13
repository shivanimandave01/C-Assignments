#include<stdio.h>
#include<conio.h>

int main()
{  
   int N1 = 0,N2 = 0,N3 = 0,Temp;
   
   printf("\n Enter 1st Number Value =");
   scanf("%d",&N1);
   
   printf("\n Enter 2nd Number Value =");
   scanf("%d",&N2);
   
   printf("\n Enter 3rd Number Value =");
   scanf("%d",&N3);
   
    printf("\n Value of Number Before swapping N1=%d,N2=%d,N3=%d",N1,N2,N3);
    
    Temp = N1;
    N1 = N3;
    N3 = N2;
    N2 = Temp;
    
    printf("\n Value of Number Before swapping N1=%d,N2=%d,N3=%d",N1,N2,N3);
    
   getch();
   return 0;   
   
}