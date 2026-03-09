//Calculate square Root of Given number//

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
 int Number,Sqr_rt;

 printf("\n\tEnter any Number = ");
 scanf("%d",&Number);

 Sqr_rt= sqrt(Number);

 printf("\n\tSquare Root of %d is = %d",Number,Sqr_rt);

 getch();
 return 0;
 }