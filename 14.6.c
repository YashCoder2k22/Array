#include<stdio.h>
int main()
{
    int a[10],i,j,k;
    printf("Enter 10 Numbers");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(a[i]>a[j])
        {
            k=a[i];
            a[i]=a[j];
            a[j]=k;
        }
        }
    }
    printf("Sorted array is");
    for(i=0;i<=9;i++)
    printf("%d ",a[i]);
    return 0;
}