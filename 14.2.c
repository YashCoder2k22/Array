#include<stdio.h>
int main()
{
    int a[10],i,sum=0,avg;
    printf("Enter 10 Numbers");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/i;
    printf("Average of %d numbers : %d",i,avg);
    return 0;
}