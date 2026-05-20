#include<stdio.h>
#include<conio.h>

float Value();

int main()
{
    float PI = 0;

    PI = Value();

    printf("\n Value of PI is = %0.2f",PI);

    getch();
    return 0 ;
}
float Value()
{
    float Value = 0;

    printf("\n Enter Value of PI : ");
    scanf("%f",&Value);

    return Value;
}
