#include<stdio.h>
int main()
{
    int a[100], n, key, *p, i, found=0;
    printf("Enter size: ");
    scanf("%d",&n);
    p=a;
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    printf("Enter element to search: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(*(p+i)==key)
        {
            printf("Found at position %d",i+1);
            found=1;
            break;
        }
    }
    if(found==0)
        printf("Element not found.");
    return 0;
}