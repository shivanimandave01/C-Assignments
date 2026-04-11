#include<stdio.h>
#include<conio.h>

int main()
{
     int No1 = 0,No2 = 0,HCF = 0,i = 0,j = 0;

     printf("\n Enter 1st Number for HCF :");
     scanf("%d",&No1);

     printf("\n Enter 2nd Number for HCF :");;
     scanf("%d",&No2);

     if(No1 > No2)
     {
        j = No1;
     }
     else
     {
        j = No2;
     }
     for(i = 1;i <= j;i++)
     {
        if(No1 % i == 0 && No2 % i == 0)
     {
            HCF = i;
     }
     }
     printf("\n The Highest common factor of %d and %d is %d",No1,No2,HCF);

     getch();
     return 0;
 }
