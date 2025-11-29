//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>
int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter k: ");
    scanf("%d", &k);
    if(k > n) {
        printf("Invalid! k cannot be greater than array size.\n");
        return 0;
    }
    printf("First negatives in each window: ");
    for(int start = 0; start <= n - k; start++) {
        int found = 0;
        for(int j = start; j < start + k; j++) {
            if(arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break; 
            }
        }
        if(!found) {
            printf("0 ");
        }
    }
    printf("\n");
    return 0;
}