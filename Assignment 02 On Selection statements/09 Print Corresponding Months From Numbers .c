#include<stdio.h>
#include<conio.h>

int main()
{
 int Number = 0;

 printf("\nEnter Any Number:");
 scanf("%d",&Number);

 if(Number == 1)
 {
 printf("\nThe Month of the Year is : January");
 }
 else if(Number == 2)
 {
 printf("\nThe Month of the Year is : February");
 }
 else if(Number == 3)
 {
 printf("\nThe Month of the Year is : March");
 }
 else if(Number == 4)
 {
 printf("\nThe Month  of the Year is : April");
 }
else if(Number == 5)
 {
 printf("\nThe Month of the Year is : May");
 }
 else if(Number == 6)
 { 
 printf("\nThe Month of the Year is : June");
 }
 else if(Number == 7)
 {
 printf("\nThe Month of the  Year is : July");
 }
 else if(Number == 8)
 {
 printf("\nThe Month of the  Year is : August");
 }
 else if(Number == 9)
 {
 printf("\nThe Month of the  Year is : September");
 }
 else if(Number == 10)
 {
 printf("\nThe Month of the  Year is : October");
 }
 else if(Number == 11)
 {
 printf("\nThe Month of the  Year is : November");
 }
 else if(Number == 12)
 {
 printf("\nThe Month of the  Year is : December");
 }
 else
 {
 printf("\nGiven number is Default");
 }
 
 getch();
 return 0;
}