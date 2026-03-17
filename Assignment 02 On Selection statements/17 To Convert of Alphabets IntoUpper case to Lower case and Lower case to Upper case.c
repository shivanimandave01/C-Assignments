#include<stdio.h>
#include<conio.h>

int main()
{
char ch='\0';

printf("Enter Any Character =");
scanf("%c",&ch);

if(ch >= 'A' || ch <= 'Z' || ch >= 'a' || ch <='z' )
{
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("Lower case of chracter is = %c",ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("Upper case of character is = %c",ch);
    }
}
else
{
    printf("It is not Alphabet");
}
getch();
return 0;
}
