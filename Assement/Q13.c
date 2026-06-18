#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements (0, 1, 2 only):\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int low = 0, mid = 0, high = n - 1;
    while(mid <= high) {
        if(arr[mid] == 0) {
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        }
        else if(arr[mid] == 1) {
            mid++;
        }
        else { 
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
    printf("Sorted Array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}