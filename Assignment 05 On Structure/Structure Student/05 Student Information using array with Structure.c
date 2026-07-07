#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 3

 struct student
 {
 int Roll_no[size];
 char Name[size];
 char Std[size];
 };

 int main()
 {
    struct student stud[size]={};
    int i = 0;

    printf("\n Enter Student information => ");

    for(i = 0;i < size;i++)
    {
        printf("\n Enter Student Name :");
        gets(stud[i].Name[i]);

        printf("\n Enter Student Roll No :");
        scanf("%d",&stud[i].Roll_no[i]);

        fflush(stdin);

        printf("\n Enter Student Standard :");
        gets(stud[i].Std[i]);
    }
    printf("\n\t Display student information => ");
    printf("\n Roll No.  ");
    printf("\t Name  ");
    printf("\t Standard  ");

    for(i = 0;i < size;i++)
    {
        printf("\t %d",stud[i].Roll_no[i]);
        printf("\t %s",stud[i].Name[i]);
        printf("\t %c",stud[i].Std[i]);

    }
    getch();
    return 0;
}
