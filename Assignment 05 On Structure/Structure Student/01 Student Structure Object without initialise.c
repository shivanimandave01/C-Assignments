#include<conio.h>
#include<stdio.h>

struct students
{
    int Roll_No;
    char Name[30];
    float Percentage;
};

int main()
{
    struct students s1 ;

    printf("\n Roll Number of student without Initialiser is %d",s1.Roll_No);
    printf("\n Name of student without Initialiser is %c",s1.Name);
    printf("\n Percentage of student without Initialiser is %f",s1.Percentage);

    getch();
    return 0;
}
