//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100] = "numbers.txt";
    int num;
    int sum = 0, count = 0;
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error! File not found.\n");
        return 1;
    }
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fp);
    if (count == 0) {
        printf("No integers found in the file.\n");
    } else {
        float average = (float) sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    }
    return 0;
}