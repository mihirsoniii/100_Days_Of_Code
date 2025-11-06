//Print the initials of a name.
#include <stdio.h>
int main() {
    char name[100];
    int i = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");
    if (name[0] != ' ' && name[0] != '\n') {
        printf("%c", name[0]);
    }
    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0' && name[i + 1] != '\n') {
            printf("%c", name[i + 1]);
        }
        i++;
    }

    printf("\n");
    return 0;
}