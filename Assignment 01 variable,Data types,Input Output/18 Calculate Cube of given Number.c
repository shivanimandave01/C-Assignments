#include <stdio.h>
#include <conio.h>

int main()
{  
   int number,cube ;
   
   printf("\n\tEnter the number");
   scanf("%d",&number);
   
   cube =number*number*number; 
   
   printf ("Cube%d*%d",number,cube);
   
   getch();
   return 0;   
   
}