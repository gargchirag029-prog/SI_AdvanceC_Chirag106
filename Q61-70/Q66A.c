#include<stdio.h>
void swap(int x, int y)
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    printf("before swapping: x=%d y=%d",x,y);
    void swap(x,y);
    printf("\nafter swapping: x=%d y=%d",x,y);
    return 0;
}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}