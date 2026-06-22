#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10], size, i;
    int largest, smallest;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
     largest = a[0];
    smallest = a[0];
    for (i = 1; i < size; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
        if (a[i] < smallest) {
            smallest = a[i];
        }
    }

    printf("\nLargest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);
    return 0;
}