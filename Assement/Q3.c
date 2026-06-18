#include<stdio.h>
int main()
{
    int a[3]={1,3,5},b[3]={2,4,6},c[6],i,j;
    for(i=0;i<3;i++){
        c[i]=a[i];
        c[i+3]=b[i];
    }
    for(i=0;i<6;i++){
        for(j=0;j<5-i;j++){
            if(c[j]>c[j+1]){
                int temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
    for(i=0;i<6;i++){
        printf("%d ",c[i]);
    }
    return 0;
}