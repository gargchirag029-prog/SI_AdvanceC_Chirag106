#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5},n=5;
    int pos,del;
    printf("enter the delete element in array");
    scanf("%d",&del);
    printf("enter the position of element in array");
    scanf("%d",&pos);
    for(int i=0;i<n;i++)
    {
        if(a[i]==del)
        {
            for(int j=i;j<n-1;j++)
            {
                a[j]=a[j+1];
            }
            n--;
            break;
        }
    }
    printf("array after deletion:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}