#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,j,n,temp;
    printf("enter the number of elements in the array");
    scanf("%d",&n);
    printf("enter the elements in the array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted array is\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    getch();
}