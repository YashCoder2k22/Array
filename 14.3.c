#include<stdio.h>
int main()
{
    int a[10],i,sum1=0,sum2=0;
    printf("Enter 10 Numbers");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
        {
            sum1=sum1+a[i];
        }
        else
        {
            sum2=sum2+a[i];
        }
    }
    printf("\nSum of even numbers is %d",sum1);
    printf("\nSum of odd numbers is %d",sum2);
    return 0;
}