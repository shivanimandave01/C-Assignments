#include<stdio.h>
#include<conio.h>

int main()
{
    char Div = '\0';

    printf("\n Enter Your Division(A,B,C,D) =>");
    scanf("%c",&Div);

    switch(Div)
    {

    case 'A':
    case 'a':

        printf("\n Your Exam At 10 AM.");
        break;

    case 'B':
    case 'b':

        printf("\n Your Exam At 10.30 AM.");
        break;

    case 'C':
    case 'c':

        printf("\n Your Exam At 1 PM.");
        break;

    case 'D':
    case 'd':

        printf("\n Your Exam At 1.30 PM.");
        break;

    default:
        printf("\n Invalid Division...");
        break;
    }
    getch();
    return 0;
}
