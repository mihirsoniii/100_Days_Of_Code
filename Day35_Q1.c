//Find the second largest element in an array.
#include <stdio.h>  
int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int firstLargest = -2147483648; 
    int secondLargest = -2147483648; 

    for (i = 0; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
        
    }

    if (secondLargest == -2147483648) {
        printf("There is no second largest element in the array.\n");
    } else {
        printf("The second largest element in the array is: %d\n", secondLargest);
    }
    return 0;
}