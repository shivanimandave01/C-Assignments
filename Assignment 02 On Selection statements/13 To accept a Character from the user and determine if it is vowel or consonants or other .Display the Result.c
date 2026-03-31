#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter any character :");
    scanf("%c",&ch);

    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("\n The Character '%c' is a vowel",ch);
    }

    else if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        printf("\n The Character '%c' is a Consonant",ch);
    }
    else
    {
        printf("\n The Character '%c' is other");
    }
    getch();
    return 0;
}
