#include<stdio.h>
#include<conio.h>

long long int Result(int ,int );

int main()
{
    int No1 = 0,No2 = 0;
    long long int result = 0;

    printf("\n Enter A Base Number :");
    scanf("%d",&No1);

    printf("\n Enter A Exponent Number :");
    scanf("%d",&No2);

    result = Result(No1,No2);

    printf("\n %d ^ %d = %lld",No1,No2,result);

    getch();
    return 0;

}
long long int Result( int Num1,int Num2)
{
  long long int Result = 1;

    while(Num2 != 0)
    {
        Result = Result * Num1;

        Num2--;
    }

    return Result;
}
