#include<stdio.h>
int main()
{
    int a[10],i,j,count;
    printf("Enter 10 Numbers");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
        count=0;
        for(j=0;j<=9;j++)
        {
            if(a[i]>=a[j])
            count++;
        }
        if(count==10)
            break;
    }
    printf("Greatest number in array is %d",a[i]);
    return 0;
}