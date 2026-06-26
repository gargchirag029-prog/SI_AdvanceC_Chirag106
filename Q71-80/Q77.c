#include<stdio.h>
int main()
{
    int a[100], b[100], n, *p1, *p2, temp, i;
    printf("Enter size: ");
    scanf("%d",&n);
    p1=a;
    p2=b;
    printf("Enter first array:\n");
    for(i=0;i<n;i++)
        scanf("%d",p1+i);
    printf("Enter second array:\n");
    for(i=0;i<n;i++)
        scanf("%d",p2+i);
    for(i=0;i<n;i++)
    {
        temp=*(p1+i);
        *(p1+i)=*(p2+i);
        *(p2+i)=temp;
    }
    printf("First Array:\n");
    for(i=0;i<n;i++)
        printf("%d ",*(p1+i));
    printf("\nSecond Array:\n");
    for(i=0;i<n;i++)
        printf("%d ",*(p2+i));
    return 0;
}