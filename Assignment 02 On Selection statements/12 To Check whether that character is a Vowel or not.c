#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';
    printf("\n Enter the Character =");
    scanf("%c",&ch);
    
    if(ch == 'A' || ch  == 'E' || ch == 'I' || ch =='O' || ch == 'U'|| ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch  == 'u')
    {printf("\nThe Character %c is a Vowel",ch);
    }
    else
    {
    printf("\nThe Character %c is not a Vowel",ch);
    }
    getch();
    return 0;
}