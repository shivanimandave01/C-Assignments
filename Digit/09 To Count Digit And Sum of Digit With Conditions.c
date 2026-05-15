#include<stdio.h>
#include<conio.h>

int main()
{
    long long int No = 0,Temp = 0;
    short int Cnt = 0,dSum = 0;

    printf("\n Enter Valid 10 Digit Mobile Number : ");
    scanf("%lld",&No);

    Temp = No;

    while(Temp != 0)
    {
        Cnt++;

        Temp = Temp / 10;
    }

    if(Cnt == 10)
    {
            Temp = No;

            while(Temp != 0)
            {
                dSum = dSum + (Temp % 10);

                Temp /= 10;
            }

            if(dSum % 2 == 0)

            {
                printf("\n Get Good Opportunities");
            }
            else
            {
                printf("\n Take Care");
            }
    }
    else
    {
        printf("\n Invalid Mobile Number.");
    }
    getch();
    return 0;
}
