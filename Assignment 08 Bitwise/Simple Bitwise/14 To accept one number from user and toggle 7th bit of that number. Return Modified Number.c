#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&Num);

    if((Num & (1 << 6)) != 0)
    {
        Num = Num & ~(1 << 6);

        printf("\n Modify the Number after Toggle is %d.",Num);
    }
    else
    {
        Num = Num | ~(1 << 6);

        printf("\n Modify the Number after Toggle is %d.",Num);

    }

    getch();
    return 0;
}
