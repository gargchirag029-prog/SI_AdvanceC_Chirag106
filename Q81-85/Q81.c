#include<stdio.h>
int main()
{
    int a[100], n, key;
    int first=-1,last=-1,i;
    printf("Enter size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            if(first==-1)
                first=i;

            last=i;
        }
    }
    printf("First Position = %d\n",first);
    printf("Last Position = %d\n",last);

    return 0;
}