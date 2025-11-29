//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include<stdio.h> 
int main()
{int n ;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements(from 0 to n with one missing ) ",n);
    int sum_array=0;  
    for(int i=0;i<n;i++)
    {scanf("%d",&arr[i]);
     sum_array+=arr[i];
    }
    int sum_total = n * (n + 1) / 2;
    int missing = sum_total - sum_array;

    printf("Missing number is: %d\n", missing);

    return 0;

}