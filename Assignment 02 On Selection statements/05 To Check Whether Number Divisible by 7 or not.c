#include<stdio.h>
#include<conio.h>

int main()
{
int Number = 0;

up:
printf("\nEnter Any Number:");
scanf("%d",&Number);

if(Number == 0)
goto up;

 else if(Number % 7 == 0) 
{
printf("\n%d is Divisible By 7.",Number);
}
else
printf("\n%d is not divisible By 7",Number);

getch();
return 0;
}