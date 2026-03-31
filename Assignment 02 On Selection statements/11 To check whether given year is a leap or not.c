#include<stdio.h>
#include<conio.h>

int main()
{
    int Year = 0;

    printf("\n Enter an Year : ");
    scanf("%d",&Year);

    if(Year > 1000 && Year < 9999)
        {
            if(Year % 4 == 0)
            {
                printf("\n %d is a Leap year.",Year);
            }
            else
            {
                printf("\n %d is not Leap year.",Year);
            }
        }
    else
    {
        printf("\n Invalid Year.");
    }
    getch();
    return 0;
    }

