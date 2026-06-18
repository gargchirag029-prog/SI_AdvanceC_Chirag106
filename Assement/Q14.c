#include <stdio.h>

int main() {
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int majority = size / 3;
    int found = 0;
        for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > majority) {
            printf("The majority element is: %d\n", arr[i]);
            found = 1;
            break; 
        }
    }
    if (!found) {
        printf("No majority element exists.\n");
    }
    return 0;
}
