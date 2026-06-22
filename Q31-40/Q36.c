#include<stdio.h>
int main(){
    int a[10],n,sum=0;
    float average;
    printf("Enter the Size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
    sum=sum+a[i];
    }
    average=(float)sum/n;
    printf("The average of the array is: %.2f",average);
    printf("\nThe sum of the array is: %d",sum);
    return 0;
}