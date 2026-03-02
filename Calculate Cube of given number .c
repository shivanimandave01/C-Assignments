//Cube of given number//
#include<stdio.h>
include<conio.h>

int main()
{
    int  Number,Cube;
    
     printf("\nEnter value of any number :");
     scanf("%d",&Number);
     
     Cube = Number * Number * Number;
     printf("\n Cube of given number =%d", Cube);
    
    getch();
    return 0;
}