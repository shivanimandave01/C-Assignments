#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0,Shift_No = 0,Result = 0;

    printf("\n Enter A Number  :");
    scanf("%d",&Num);

    printf("\n How Many digits Will be Shift :");
    scanf("%d",&Shift_No);


    Result = Num << Shift_No;

    printf("\n %d << %d = %d",Num,Shift_No,Result);

    getch();
    return 0;
}
