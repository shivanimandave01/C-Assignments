#include<stdio.h>

int main()
{
    int m1 = 0,m2 = 0,m3 = 0,total;
    float per;
    printf("Enter marks of all subjects :");
    
    printf("\n\nEnter marks of marathi :");
    scanf("%d",&m1);
    
    printf("\nEnter marks of english :");
    scanf("%d",&m2);
    
    printf("\nEnter marks of Hindi :");
    scanf("%d",&m3);
    
    total = m1 + m2 + m3;
    printf("\nTotal marks of all subjects :%d",total);
    
    per = (float)total/3;
    printf("\nPercentage of student=%d",per);
    
    return 0;
}