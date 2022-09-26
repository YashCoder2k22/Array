#include<stdio.h>
int main()
{
    int a[20],b[20],i,j,n,count;
    printf("Ente a Number");
    scanf("%d",&n);
    printf("Enter %d numbers",n);
    for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n-1;i++)
    b[i]=a[i];
    printf("Now elements in b array are: ");
    for(i=0;i<=n-1;i++)
    printf("%d ",b[i]);
    return 0;
}