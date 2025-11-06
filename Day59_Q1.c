//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>
int main() {
    int arr[100], n, k;
    int maxSum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the size of subarray k: ");
    scanf("%d", &k);

    for (int i = 0; i <= n - k; i++) {
        int currentSum = 0;
        for (int j = 0; j < k; j++) {
            currentSum += arr[i + j];
        }
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("Maximum sum of subarrays of size %d: %d\n", k, maxSum);
    return 0;
}