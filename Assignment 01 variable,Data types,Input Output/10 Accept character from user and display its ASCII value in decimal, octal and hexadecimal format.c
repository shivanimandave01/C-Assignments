#include <stdio.h>
#include<conio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c",&ch);

    printf("Decimal     : %d\n", ch);
    printf("Octal       : %o\n", ch);
    printf("Hexadecimal : %X\n", ch);

    getch();
    return 0;
}
