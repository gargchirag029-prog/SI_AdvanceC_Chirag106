#include<stdio.h>
#include<conio.h>
int main()
{
    int a[50],even[50],odd[50], size, i,countEven=0,countOdd=0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            even[countEven] = a[i];
            countEven++;
        }
        else
        {
            odd[countOdd] = a[i];
            countOdd++;
        }
    }
    printf("\nEven numbers in the array are: ");
    for(i=0;i<countEven;i++)
    {
        printf("%d ", even[i]);
    }
    printf("\nOdd numbers in the array are: ");
    for(i=0;i<countOdd;i++)
    {
        printf("%d ", odd[i]);
    }
    return 0;
}