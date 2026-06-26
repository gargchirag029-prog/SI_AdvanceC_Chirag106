#include<stdio.h>
int main()
{
    int a[100],n,i;
    int maxsum,currsum;
    printf("Enter size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    currsum=maxsum=a[0];
    for(i=1;i<n;i++)
    {
        if(currsum+a[i]>a[i])
            currsum=currsum+a[i];
        else
            currsum=a[i];

        if(currsum>maxsum)
            maxsum=currsum;
    }
    printf("Maximum Sum = %d",maxsum);

    return 0;
}