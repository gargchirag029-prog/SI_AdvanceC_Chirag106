#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},n=5;
    int ins,pos;
    printf("enter the insert element in array");
    scanf("%d",&ins);
    printf("enter the position to insert element in array");
    scanf("%d",&pos);
    for(int i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=ins;
    printf("array after insertion:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}