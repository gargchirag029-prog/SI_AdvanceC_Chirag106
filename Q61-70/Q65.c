//65.	Create a function to check for Prime/Armstrong/Perfect numbers
#include <stdio.h>
void prime(int n){
    for(int temp=n;temp>0;temp=temp/10){
        int rem=temp%10;
        if(rem==2 || rem==3 || rem==5 || rem==7){
            printf("%d is a prime digit\n", rem);
        }
        else{
            printf("%d is not a prime digit\n", rem);
        }
}}
void armstrong(int n){
    int sum=0, temp=n, r;
    while(temp!=0){
        r=temp%10;
        sum+=r*r*r;
        temp/=10;
    }
    if(sum==n){
        printf("%d is an Armstrong number\n", n);
    }
    else{
        printf("%d is not an Armstrong number\n", n);
    }
}
void perfect(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        printf("%d is a Perfect number\n", n);
    }
    else{
        printf("%d is not a Perfect number\n", n);
    }
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    prime(n);
    armstrong(n);
    perfect(n);
    return 0;
}