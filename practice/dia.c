#include<stdio.h>
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j,sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j){
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum of diagonal elements is %d",sum);
    int cornersum=a[0][0]+a[0][i-1]+a[i-1][0]+a[i-1][i-1];
    printf("\nsum of corner elements is %d",cornersum);
    if(sum==cornersum)
    {
        printf("\ncorner sum is equal to diagonal sum");
    }
    else
    {
        printf("\ncorner sum is not equal to diagonal sum");
    }
    return 0;
}