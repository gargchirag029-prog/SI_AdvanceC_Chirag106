#include <stdio.h>
int main() {
    int arr[10] = {10, 20, 30, 40, 50}; 
    int size = 5;                       
    int position;

    printf("Original array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\nEnter the position to delete (0 to %d): ", size - 1);
    scanf("%d", &position);
    if (position < 0 || position >= size) {
        printf("Invalid position! Deletion failed.\n");
    } else {
        for (int i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
        printf("Array after deletion: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
