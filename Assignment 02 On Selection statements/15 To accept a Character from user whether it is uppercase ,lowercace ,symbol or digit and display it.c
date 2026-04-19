#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter any character :");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("\n The Character '%c' is a Uppercase letter",ch);
    }

    else if(ch >= 'a' && ch <= 'z')
    {
        printf("\n The Character '%c' is a Lower case",ch);
    }
    else if(ch >= '1' && ch <= '10')
    {
        printf("\n The Character '%c' is a digit",ch);
    }
    else
    {
        printf("\n The character '%c' is symbol",ch);
    }
    getch();
    return 0;
}
