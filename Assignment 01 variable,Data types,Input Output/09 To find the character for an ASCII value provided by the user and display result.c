//Conversion of ASCII To Character//
#include<stdio.h>
#include<conio.h>

int main()
{
    int ch = 0;

    printf(" \n Enter the ASCII Value=");
    scanf("%d",&ch);

    printf("\nCharacter of %d is = %c", ch,ch);

    getch();
    return 0;
}
