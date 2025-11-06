//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>  
int main() {
    
    int n1,n2;
    int sum,difference,product;
    float quotient;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    sum=n1+n2;
    difference=n1-n2;
    product = n1*n2;
    if (n2 !=0) {
        quotient = (float)n1 / n2;
        printf("The quotient of %d and %d is %.2f\n",n1,n2,quotient);
    } else {
        printf("Cannot divide by zero.\n");
    }
    printf("The sum of %d and %d is %d\n",n1,n2,sum);
    printf("The difference of %d and %d is %d\n",n1,n2,difference);
    printf("The product of %d and %d is %d\n",n1,n2,product);
}