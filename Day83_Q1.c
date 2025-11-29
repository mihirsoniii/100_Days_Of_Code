//Create an enum for months and print how many days each month has.
#include <stdio.h>
enum Month {
    JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};
int main() {
    enum Month m;
    int days;
    for (m = JANUARY; m <= DECEMBER; m++) {
        switch (m) {
            case JANUARY: case MARCH: case MAY: case JULY:
            case AUGUST: case OCTOBER: case DECEMBER:
                days = 31;
                break;
            case APRIL: case JUNE: case SEPTEMBER: case NOVEMBER:
                days = 30;
                break;
            case FEBRUARY:
                days = 28; 
                break;
        }
        printf("Month %d has %d days\n", m, days);
    }
    return 0;
}