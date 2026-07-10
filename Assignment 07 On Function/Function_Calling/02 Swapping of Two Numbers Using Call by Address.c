#include<stdio.h>
#include<conio.h>

void swap(int*,int*);

int main()
{
    int N1 = 0,N2 = 0;

    printf("\n Enter 1st Number : ");
    scanf("%d",&N1);

    printf("\n Enter 2nd Number : ");
    scanf("%d",&N2);

    printf("\n Before Swapping 1st Number = %d,2nd Number = %d. ",N1,N2);

    swap(&N1,&N2);

    printf("\n After Swapping 1st Number = %d,2nd Number = %d. ",N1,N2);

    getch();
    return 0;

}
void swap(int* P1,int* P2)
{
    int Temp = 0;

    Temp = *P1;

    *P1 = *P2;

    *P2 = Temp;
}
