#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10], size, i;
    int temp;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int start = 0;
    int end = size - 1;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printf("The reverse of the array is: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}