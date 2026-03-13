#include<stdio.h>
#include<conio.h>

int main()
{
 int Number = 0;

 printf("\nEnter Any Number:");
 scanf("%d",&Number);

 if(Number % 7 == 0  &&  Number %5 == 0) 
 {
 printf("\n%d is Divisible By Both 5 and 7.",Number);
 }
 else if(Number % 5 == 0)
 {
 printf("\n%d is Divisible By Only 5.",Number);
 }
 else if(Number % 7 == 0)
 {
 printf("\n%d is not divisible By Only 7",Number);
 }
 else
 {
 printf("\n %d is not divisible by both 5 and 7",Number);
 }
 getch();
 return 0;
}