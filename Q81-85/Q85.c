#include<stdio.h>
int main()
{
    int n,a[100],i,sum=0,total;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter %d numbers:\n",n-1);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    total=n*(n+1)/2;
    printf("Missing Number = %d",total-sum);
    return 0;
}