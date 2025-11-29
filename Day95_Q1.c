//Return a structure containing top student's details from a function.
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
struct Student findTopStudent(struct Student s[], int n) {
    int i;
    int topIndex = 0;   
    for(i = 1; i < n; i++) {
        if(s[i].marks > s[topIndex].marks) {
            topIndex = i;  
        }
    }
    return s[topIndex];  
}
int main() {
    struct Student st[5];  
    int i;
    printf("Enter details of 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", st[i].name);
        printf("Enter roll number: ");
        scanf("%d", &st[i].roll);
        printf("Enter marks: ");
        scanf("%f", &st[i].marks);
    }
    struct Student topper = findTopStudent(st, 5);
    printf("\n===== Top Student Details =====\n");
    printf("Name  : %s\n", topper.name);
    printf("Roll  : %d\n", topper.roll);
    printf("Marks : %.2f\n", topper.marks);
    return 0;
}