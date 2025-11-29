//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
int main() {
    struct Employee e1, e2;  
    FILE *fp;
    printf("Enter employee name: ");
    scanf("%s", e1.name);
    printf("Enter employee ID: ");
    scanf("%d", &e1.id);
    printf("Enter employee salary: ");
    scanf("%f", &e1.salary);
    fp = fopen("employee.dat", "wb"); 
    if(fp == NULL) {
        printf("File cannot open!\n");
        return 1;
    }
    fwrite(&e1, sizeof(e1), 1, fp);  
    fclose(fp);
    printf("\nData stored in binary file successfully!\n");
    fp = fopen("employee.dat", "rb");  
    if(fp == NULL) {
        printf("File cannot open!\n");
        return 1;
    }
    fread(&e2, sizeof(e2), 1, fp); 
    fclose(fp);
    printf("\n--- Employee Details From File ---\n");
    printf("Name   : %s\n", e2.name);
    printf("ID     : %d\n", e2.id);
    printf("Salary : %.2f\n", e2.salary);
    return 0;
}