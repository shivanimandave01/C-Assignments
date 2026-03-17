#include<stdio.h>
#include<conio.h>

int main()
{
int Day = 0;

printf("\n Enter any number :");
scanf("%d",&Day);

switch(Day)
{

case 1:
    printf("\n Sunday");
    break;

case 2:
    printf("\n Monday");
    break;

case 3:
    printf("\n Tuesday");
    break;

case 4:
    printf("\n Wednesday");
    break;

case 5:
    printf("\n Thursday");
    break;

case 6:
    printf("\n Friday ");
    break;

case 7:
    printf("\n Saturday ");
    break;

case default:
    printf("\n Invalid Number");
}
getch();
return 0;
}
