#include<stdio.h>
#include<conio.h>

int main()
{
int Number = 0;

printf("Enter Any Number:");
scanf("%d",&Number);

(Number % 2 == 0) ? printf("%d is Even Number.",Number) : printf("%d is Odd Number.",Number);

getch();
return 0;
}