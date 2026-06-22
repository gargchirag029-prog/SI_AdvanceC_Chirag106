#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5]={1,2,3,4,5},item,i;
    printf("enter the item to be searched");
    scanf("%d",&item);
    for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
        if(a[i]==item){
            printf("item found at index %d",i);
            break;
        }
    }
    if(i==sizeof(a)/sizeof(a[0])){
        printf("item not found in the array");
    }
    getch();
}