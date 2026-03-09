#include <stdio.h>
#include <conio.h>
int main()
{  
   int number,square ;
   
   printf("\n\tEnter the number");
   scanf("%d",&number);
   
   square =number*number; 
   
   printf ("square of %d*%d",number,square);
   
   getch();
   return 0;   
   
}