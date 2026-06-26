#include<stdio.h>
int main()
{
    int a[100], n, *start, *end, temp, i;
    printf("Enter size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    start=a;
    end=a+n-1;
    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }
    printf("Reversed Array:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}