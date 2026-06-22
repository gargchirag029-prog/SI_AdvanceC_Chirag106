#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10]={3,2,4,5,6,88,95,1,3,99};
    int temp,min,i,j;
    for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
        min=i;
        for(j=i+1;j<sizeof(a)/sizeof(a[0]);j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("sorted array is\n");
    for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
        printf("%d\n",a[i]);
    }
    getch();
}