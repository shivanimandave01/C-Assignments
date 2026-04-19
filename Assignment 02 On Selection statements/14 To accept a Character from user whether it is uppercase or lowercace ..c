#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = '\0';

    printf("\n Enter a Character : ");
    scanf("%c",&Ch);

    if(Ch >= 'A' && Ch <= 'Z')
    {
        printf("\n The Character '%c' is Upper Case.",Ch);
    }

    else if(Ch >= 'a' && Ch <= 'z')
    {
        printf("\n The Character '%c' is Lower Case.",Ch);
    }
    else
    {
        printf("\n The Chracter '%c' is Other.",Ch);
    }
    getch();
    return 0;
}
