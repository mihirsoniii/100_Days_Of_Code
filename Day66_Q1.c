//Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

#include<stdio.h> 
int main()
{int n ,target;

    printf("Enter the number of elements ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements ",n);
    for(int i=0;i<n;i++)
    {scanf("%d",&arr[i]);
    }
    printf("Enter the target");
    scanf("%d", &target);  
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if( arr[i] + arr[j] == target) {
                printf("%d %d", i, j);
                return 0;   
            }
        }
    }
    printf("-1 -1");
    return 0;
}