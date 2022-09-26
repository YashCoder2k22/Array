#include<stdio.h>
int main()
{
    int a[20],i,j,n,count;
    printf("Ente a Number");
    scanf("%d",&n);
    printf("Enter %d numbers",n);
    for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
    printf("Reverse values in array are: ");
    for(i=n-1;i>=0;i--)
    printf("%d ",a[i]);
    return 0;
}