#include <stdio.h>
#include<conio.h>

int main()
{  
   int N1 = 0,N2 = 0,Mod;
   
   printf("\n\tEnter the 1st number value =");
   scanf("%d",&N1);
   
   printf("\n\tEnter the 2nd number value =");
   scanf("%d",&N2);
   
   Mod = N1 % N2; 
   
   printf ("\n\tModulus of %d %% %d =%d",N1,N2,Mod);
   
   getch();
   return 0;   
   
}