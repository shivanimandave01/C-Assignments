#include<stdio.h>
#include<conio.h>
#define Size 5

int main()
{
    int Num[Size] = {},i = 0,Cnt_Even = 0,Cnt_Odd = 0,Cnt_Zero = 0;

    for(i = 0;i < Size;i++)
    {
        printf("\n Enter %d Number :",i+1);
        scanf("%d",&Num[i]);

        if(Num[i] == 0)
        {
            Cnt_Zero++;
        }
        else if(Num[i] % 2 == 0)
        {
            Cnt_Even++;
        }
        else
        {
            Cnt_Odd++;
        }
    }
    printf("\n Count of Even Number is = %d \n Count of Odd Number is = %d \n Count of Zero Number = %d",Cnt_Even,Cnt_Odd,Cnt_Zero);

    getch();
    return 0;

}
