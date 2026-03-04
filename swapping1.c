#include<stdio.h>
#include<conio.h>

int main()
{
int N1 = 0,N2 = 0,Temp;

printf("Enter value of 1St Number =");
scanf("%d",&N1);

printf("Enter value of 2nd Number =");
scanf("%d",&N2);

printf("\nValues of Number before swapping =>N1=%d,N2=%d",N1,N2);

Temp=N1;
N1=N2;
N2=Temp;

printf("\nValues of number After swapping =>N1=%d,N2=%d",N1,N2);

getch();
return 0;
}
