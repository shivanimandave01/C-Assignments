#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0,Temp = 0,Dig = 0,Rev = 0;

    printf("\n Enter Any Number :");
    scanf("%d",&Num);

    Temp = Num;

    while(Temp != 0)
        {
            Dig = Temp % 10;

            Rev = (Rev * 10) + Dig;

            Temp = Temp / 10;
        }
    if(Num == Rev)
    {
        printf("\n Given Number %d is Palindrome Number.",Num);
    }
    else
    {
        printf("\n Given Number %d is Not Palindrome Number.",Num);
    }
    getch();
    return 0;
}

