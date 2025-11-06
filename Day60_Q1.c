//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include <stdio.h>
int main() {
    int arr[100], n, k;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the size of subarray k: ");
    scanf("%d", &k);

    printf("Maximum elements in each subarray of size %d: ", k);
    for (int i = 0; i <= n - k; i++) {
        int maxElement = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > maxElement) {
                maxElement = arr[i + j];
            }
        }
        printf("%d", maxElement);
        if (i < n - k) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
    
}