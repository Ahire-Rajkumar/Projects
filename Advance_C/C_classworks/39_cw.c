#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <num1> <num2> ... <numN>\n", argv[0]);
        return 1;
    }

    int sum = 0;
    for (int i = 1; i < argc; i++) {
        sum += atoi(argv[i]);
    }

    double average = (double) sum / (argc - 1);
    if (average == (int)average) {
        printf("Average is %.0f\n", average);
    } else {
        printf("Average is %.1f\n", average);
    }

    return 0;
}

