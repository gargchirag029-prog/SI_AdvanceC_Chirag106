#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50}; 
    int position, element;
        int size = 5;                       
        int capacity = 100;                 
    printf("Original array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n\nEnter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert at (0 to %d): ", size);
    scanf("%d", &position);
    if (position < 0 || position > size) {
        printf("Invalid position! Insertion failed.\n");
    } else if (size >= 100) {
        printf("Array is full! Cannot insert.\n");
    } else {
        for (int i = size; i > position; i--) {
            arr[i] = arr[i - 1];
        }
        arr[position] = element;
        size++;
        printf("Array after insertion: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
