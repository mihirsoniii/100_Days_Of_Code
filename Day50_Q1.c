//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
int main() {
    char date[11];
    printf("Enter date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);

    if (date[2] == '/' && date[3] == '0' && date[4] == '4' && date[5] == '/') {
        printf("Date in dd-Apr-yyyy format: %.2c-Apr-%c%c%c%c\n", date[0], date[6], date[7], date[8], date[9]);
    } else {
        printf("Invalid format. Please enter the date in dd/04/yyyy format.\n");
    }

    return 0;
}