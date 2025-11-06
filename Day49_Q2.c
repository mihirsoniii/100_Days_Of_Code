//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    int i = 0, len;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    printf("Initials with surname in full: ");
    if (name[0] != ' ' && name[0] != '\n') {
        printf("%c. ", name[0]);
    }
    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0' && name[i + 1] != '\n') {
            if (name[i + 2] == '\0' || name[i + 2] == '\n') {
                printf("%s", &name[i + 1]);
                break;
            } else {
                printf("%c. ", name[i + 1]);
            }
        }
        i++;
    }

    printf("\n");
    return 0;
    
}