#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char Grade='\0';
    int RNO = 0;
    int Total = 0;
    float Per = 0;
    char Name[40] = "\0",City[20] = "\0",Course[20]="\0";

    printf("\n Enter Roll Number =");
    scanf("%d",&RNO);

    fflush(stdin);

    printf("\n Enter Name =");
    gets(Name);

    fflush(stdin);

    printf("\n Enter Course =");
    gets(Course);

    fflush(stdin);

    printf("\n Enter City=");
    gets(City);

    printf("\nEnter total marks =");
    scanf("%d",&Total);

    printf("\nEnter percentage =");
    scanf("%d",&Per);

    fflush(stdin);

    printf("Enter Grade");
    Grade = getche();

    printf("\n Enter a key to move Ahead.......");

    getch();

    printf("\n Entered Students details are =\n");
    printf("\n Roll No  :%d",RNO);
    printf("\n Name     :%s",Name);
    printf("\n City     :%s",City);
    printf("\n Course   :%s",Course);
    printf("\n Total    :%d",Total);
    printf("\n percentage:%d",Per);
    printf("\n Grade     :%c",Grade);

    getch();
    return 0;
}
