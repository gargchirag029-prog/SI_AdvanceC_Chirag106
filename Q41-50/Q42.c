#include<stdio.h>
#include<conio.h>
int main()
{
    int arr1[10], arr2[10], merged[20], size1, size2, i, k =0;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    printf("Enter the elements of the first array: ");
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);    
    printf("Enter the elements of the second array: ");
    for (i = 0; i < size2; i++) 
    {
        scanf("%d", &arr2[i]);
    }       
    for(i=0;i<size1;i++)
    {
        merged[k] = arr1[i];
        k++;
    }
    for(i=0;i<size2;i++)
    {
        merged[k] = arr2[i];
        k++;
    }
    printf("The merged array is: ");
    for(i=0;i<size1+size2;i++)
    {
        printf("%d ",merged[i]);
    }
    getch();
    return 0;
}