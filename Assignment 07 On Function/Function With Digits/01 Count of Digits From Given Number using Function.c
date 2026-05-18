#include<stdio.h>
#include<conio.h>

 short int Dig_Cnt(int);

int main()
{
    short int Cnt = 0;
    int Num = 0;

    printf("\n Enter a Number :");
    scanf("%d",&Num);

    Cnt = Dig_Cnt(Num);

    printf("\n Addition of Digits From Given Number is %d",Cnt);

    getch();

    return 0;
}
   short int Dig_Cnt (int No)
{
       short int dCnt = 0;

        while(No != 0)
        {
            dCnt++;
            No /= 10;
        }
        return dCnt;
}
