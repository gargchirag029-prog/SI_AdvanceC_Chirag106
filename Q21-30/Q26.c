#include<stdio.h>
int main()
{
    int n;
    printf("enter the number to reverse it:");
    scanf("%d",&n);
    int rev=0;
    for(int temp=n;temp>0;temp=temp/10)
    {
        rev=rev*10+temp%10;
    }
    printf("the reverse of the number is %d",rev);
    return 0;
}