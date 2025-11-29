//Find and print the student with the highest marks.
#include <stdio.h>

enum Result { HIGHEST }; 
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student s[5];
    int i;
    enum Result r = HIGHEST; 
    int highestIndex = 0;
    for(i = 0; i < 5; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    if (r == HIGHEST) {
        for(i = 1; i < 5; i++) {
            if(s[i].marks > s[highestIndex].marks) {
                highestIndex = i;
            }
        }
    }
    printf("\n\n----- Student with Highest Marks -----\n");
    printf("Name  : %s\n", s[highestIndex].name);
    printf("Roll  : %d\n", s[highestIndex].roll);
    printf("Marks : %.2f\n", s[highestIndex].marks);

    return 0;
}