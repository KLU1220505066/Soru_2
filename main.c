#include <stdio.h>
#include <stdlib.h>



int binarySearch(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; // not found
}

int main() {
    int arr[] = {4,8,3,84,47,76,9,24,68};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 84;
    int index = binarySearch(arr, n, x);
    printf("%d", index); // output: 3
    return 0;
}

