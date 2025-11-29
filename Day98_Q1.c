//Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1, s2;
    printf("Enter details of Student 1:\n");
    printf("Name (single word): ");
    scanf("%s", s1.name);  
    printf("Roll number: ");
    scanf("%d", &s1.roll);
    printf("Marks: ");
    scanf("%f", &s1.marks);
    printf("\nEnter details of Student 2:\n");
    printf("Name (single word): ");
    scanf("%s", s2.name);
    printf("Roll number: ");
    scanf("%d", &s2.roll);
    printf("Marks: ");
    scanf("%f", &s2.marks);
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll == s2.roll &&
        s1.marks == s2.marks)
    {
        printf("\nBoth structures are IDENTICAL.\n");
    } else {
        printf("\nBoth structures are DIFFERENT.\n");
    }

    return 0;
}