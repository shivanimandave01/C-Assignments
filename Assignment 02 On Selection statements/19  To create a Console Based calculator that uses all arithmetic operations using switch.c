#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0,Result = 0;
    char Opr = '\0';

    printf("\n Enter Any Two Integers =>");

    printf("\n Enter any Mathematical Operator(+,-,*,/,%) :");
    scanf("%c",&Opr);

    switch(Opr)
    {
    case '+':
        printf("\n Enter 1st Number :");
        scanf("%d",&No1);

        printf("\n Enter 2nd Number :");
        scanf("%d",&No2);

        Result = No1 + No2;

        printf("\n Addition of %d + %d = %d",No1,No2,Result);

        break;

     case '-':
        printf("\n Enter 1st Number :");
        scanf("%d",&No1);

        printf("\n Enter 2nd Number :");
        scanf("%d",&No2);

        Result = No1 - No2;

        printf("\n Substraction of %d - %d = %d",No1,No2,Result);

        break;

     case '*':
        printf("\n Enter 1st Number :");
        scanf("%d",&No1);

        printf("\n Enter 2nd Number :");
        scanf("%d",&No2);

        Result = No1 * No2;

        printf("\n Multiplication of %d * %d = %d",No1,No2,Result);

        break;

     case '/':
        printf("\n Enter 1st Number :");
        scanf("%d",&No1);

        printf("\n Enter 2nd Number :");
        scanf("%d",&No2);

        Result = No1 / No2;

        printf("\n Division of %d / %d = %d",No1,No2,Result);

        break;

     case '%':
        printf("\n Enter 1st Number :");
        scanf("%d",&No1);

        printf("\n Enter 2nd Number :");
        scanf("%d",&No2);

        Result = No1 % No2;

        printf("\n Modulus of %d %% %d = %d",No1,No2,Result);

        break;

      default:
        printf("\n Invalid Operator");
        break;

        }

    getch();
    return 0;
}
