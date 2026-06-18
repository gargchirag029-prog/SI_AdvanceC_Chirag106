#include <stdio.h>

int main() {
    int arr[100], size, i, j;
    int Duplicate = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nDuplicate elements in the array are: ");
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            // If a match is found
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                Duplicate = 1;
                break;
            }
        }
    }
    if (Duplicate == 0) {
        printf("None");
    }
    
    printf("\n");
    return 0;
}
