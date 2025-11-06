//Rotate an array to the right by k positions.
#include <stdio.h>
int main() {
    int n, k, i, j;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n], rotated[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);
    k = k % n; 
    for (i = 0; i < n; i++) {
        j = (i + k) % n;
        rotated[j] = arr[i];
    }
    printf("Array after rotating right by %d positions:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");
    return 0;
    
}
