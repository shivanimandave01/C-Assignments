#include<stdio.h>
#include<conio.h>

int main()
{
    int N1 = 0,N2 = 0,N3 = 0;

    printf("\nEnter a value of 1st Number :");
    scanf("%d",&N1);

    printf("\nEnter a value of 2nd Number :");
    scanf("%d",&N2);

    printf("\nEnter a value of 3rd Number :");
    scanf("%d",&N3);

    if(N1 > N2  && N1 > N3)
    {
        printf("\n %d is greatest Number",N1);
    }
    else  if(N2 > N1 && N2 > N3)
    {
        printf("\n %d is greatest Number",N2);
    }
    else
    {
        printf("\n %d is Greatest Number",N3);
    }
    getch();
    return 0;
}
