#include <stdio.h>

int main() {
    int arr[100], size, i, target;
    int foundIndex = -1; 
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target value to search for: ");
    scanf("%d", &target);
    for (i = 0; i < size; i++) {
        if (arr[i] == target) {
            foundIndex = i;
            break;          
        }
    }
    if (foundIndex != -1) {
        printf("Element found at index: %d\n", foundIndex);
    } else {
        printf("Element is not present in the array.\n");
    }

    return 0;
}
