#include<stdio.h>
int main()
{
    int a[100], n, *p, i;
    printf("Enter size: ");
    scanf("%d", &n);
    p = a;
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", p+i);
    }
    printf("Array Elements:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ", *(p+i));
    }
    return 0;
}