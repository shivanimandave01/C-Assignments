#include<stdio.h>
#include<conio.h>

int main()
{
    long long int Num = 0;
    int Temp = 0,Max_Dig = 0,Min_Dig = 0,Dig = 0;

    printf("\n Enter A Number :");
    scanf("%lld",&Num);

    Temp = Num;

    while(Temp != 0)
    {
        Dig = Temp % 10;

        if((Temp == Num) || (Dig > Max_Dig))
        {
            Max_Dig = Dig;
        }
        if((Temp == Num ) || (Dig < Min_Dig))
        {
            Min_Dig = Dig;
        }
        Temp /= 10;
    }

    printf("\n In Given Number %lld :\n Maximum Digit Are : %d \n Minimum Digit Are : %d",Num,Max_Dig,Min_Dig);

    getch();
    return 0;
}
