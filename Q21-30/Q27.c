#include<stdio.h>
int main(){
    int n;
    printf("enter the number to sum of the digits:");
    scanf("%d",&n);
    int sum=0;
    for(int temp=n;temp>0;temp=temp/10)
    {
        int rem=temp%10;
        sum=sum+rem;
    }
    printf("the sum of the digits is %d",sum);
    return 0;
}