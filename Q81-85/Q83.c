#include<stdio.h>
int main()
{
    int a[100],n;
    int low=0,mid=0,high,temp,i;
    printf("Enter size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    high=n-1;
    while(mid<=high)
    {
        if(a[mid]==0)
        {
            temp=a[low];
            a[low]=a[mid];
            a[mid]=temp;
            low++;
            mid++;
        }
        else if(a[mid]==1)
            mid++;
        else
        {
            temp=a[mid];
            a[mid]=a[high];
            a[high]=temp;
            high--;
        }
    }
    printf("Sorted Array:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}