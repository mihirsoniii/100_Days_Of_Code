//Print all enum names and integer values using a loop.
#include <stdio.h>
enum Colors { RED, GREEN, BLUE, YELLOW, ORANGE, PURPLE };
int main() {
    enum Colors color;
    printf("Colors and their integer values:\n\n");
    for (color = RED; color <= PURPLE; color++) {
        printf("%d = ", color);
        switch (color) {
            case RED:     printf("RED\n"); break;
            case GREEN:   printf("GREEN\n"); break;
            case BLUE:    printf("BLUE\n"); break;
            case YELLOW:  printf("YELLOW\n"); break;
            case ORANGE:  printf("ORANGE\n"); break;
            case PURPLE:  printf("PURPLE\n"); break;
        }
    }
    return 0;
}