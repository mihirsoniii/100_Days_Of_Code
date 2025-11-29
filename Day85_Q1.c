//Assign explicit values starting from 10 and print them.
#include<stdio.h> 
enum status 
{ success=10,
failure=20,
timeout=30
};
int main()
{printf("SUCCESS = %d\n", success);
    printf("FAILURE = %d\n",failure);
    printf("TIMEOUT = %d\n",timeout);
    return 0;
}