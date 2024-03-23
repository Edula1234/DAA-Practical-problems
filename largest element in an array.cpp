#include <stdio.h>

int findLargest(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int main() {
    int arr[] = {10, 25, 8, 36, 42};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The largest element in the array is: %d\n", findLargest(arr, size));
    return 0;
}

