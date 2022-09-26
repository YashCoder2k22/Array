#include<stdio.h>
int main()
{
    int a[20],i,j,n,count;
    printf("Ente a Number");
    scanf("%d",&n);
    printf("Enter %d numbers",n);
    for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n-1;i++)
    {
        count=0;
        for(j=0;j<=n-1;j++)
        {
            if(a[i]<=a[j])
            count++;
        }
        if(count==n-1)
            break;
    }
    printf("Second smallest number in array is %d",a[i]);
    return 0;
}