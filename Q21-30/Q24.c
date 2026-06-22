#include<stdio.h>
int main(){
    int n;
    printf("enter the number is amstrong or not:");
    scanf("%d",&n);
    int sum=0;
    for(int temp=n;temp>0;temp=temp/10)
    {
        int rem=temp%10;
        sum=sum+rem*rem*rem;
    }
    if(sum==n)
    {
        printf("the number is amstrong");
    }
    else
    {
        printf("the number is not amstrong");
    }
    return 0;
}