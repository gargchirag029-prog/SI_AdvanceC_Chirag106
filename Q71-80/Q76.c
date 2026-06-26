#include<stdio.h>
int main()
{
    int a[100], b[100], n, *p1, *p2, i;
    printf("Enter size: ");
    scanf("%d",&n);
    p1 = a;
    p2 = b;
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",p1+i);
    for(i=0;i<n;i++)
        *(p2+i)=*(p1+i);
    printf("Copied Array:\n");
    for(i=0;i<n;i++)
        printf("%d ",*(p2+i));
    return 0;
}