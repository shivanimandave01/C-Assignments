#include<stdio.h>
#include<conio.h>

int main()

{
    int iNo = 70;
    int *iPtr = &iNo;

    printf("\n Value of Number is %d ",iNo);
    printf("\n Value of Number using pointer is %d ",*iPtr);
    printf("\n Value of Pointer is %d ",iPtr);

    printf("\n Address of Number is %d",iPtr);
    printf("\n Address of Pointer is %d ",&iPtr);

    getch();
    return 0;
}
