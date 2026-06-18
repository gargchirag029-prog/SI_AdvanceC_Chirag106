#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5},n=5;
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}