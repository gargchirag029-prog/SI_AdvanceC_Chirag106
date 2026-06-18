#include <stdio.h>

int main() {
    int arr[8]={-2,-3,4,-1,-2,1 ,5,-3};
    int MSum=arr[0],curSum=arr[0];
    int start = 0, end = 0, tempStart = 0;
    for(int i = 1; i < 8; i++) {
        if(curSum + arr[i] < arr[i]) {
            curSum = arr[i];
            tempStart = i;
        } else {
            curSum += arr[i];
        }
        if(curSum > MSum) {
            MSum = curSum;
            start = tempStart;
            end = i;
        }
    }
    printf("Maximum Sum = %d\n", MSum);
    printf("Contiguous Subarray: ");
    for(int i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}