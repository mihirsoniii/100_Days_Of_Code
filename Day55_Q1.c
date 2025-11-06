//Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
#include <stdio.h>
int main() {
    int nums[100], n;
    int count[100] = {0};
    int majorityElement = -1;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; i++) {
        count[nums[i]]++;
        if (count[nums[i]] > n / 2) {
            majorityElement = nums[i];
            break;
        }
    }

    printf("Majority element: %d\n", majorityElement);
    return 0;
    
}