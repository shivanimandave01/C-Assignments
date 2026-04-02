#include<stdio.h>
#include<conio.h>

int main()
{
 int Number = 0;

 printf("\nEnter Any Number:");
 scanf("%d",&Number);

 if(Number == 1)
 {
     printf("\nThe day of the week is : Monday");
 }
 else if(Number == 2)
 {
     printf("\nThe day of the week is : Tuesday");
 }
 else if(Number == 3)
 {
     printf("\nThe day of the week is : Wednesday");
 }
 else if(Number == 4)
 {
     printf("\nThe day of the week is : Thursday");
 }
else if(Number == 5)
 {
     printf("\nThe day of the week is : Friday");
 }
 else if(Number == 6)
 {
     printf("\nThe day of the week is : Saturday");
 }
 else if(Number == 7)
 {
     printf("\nThe day of the week is : Sunday");
 }
 else
 {
     printf("\nGiven number is Default");}
 
 getch();
 return 0;
}
