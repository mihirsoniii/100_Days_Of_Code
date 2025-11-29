//Store details of 5 students in an array of structures and print all.
#include<stdio.h> 
struct student 
{ char name[50];
   int roll;
  float marks;
};
int main()
{ struct student s[5];
    int i ; 
    for(i=0;i<5;i++)
     {printf("\nEnter details of student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);}
         printf("\n\n----- Student Details -----\n");
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name  : %s\n", s[i].name);
        printf("Roll  : %d\n", s[i].roll);
        printf("Marks : %.2f\n", s[i].marks);
    }
    return 0;
}