#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int maths;
    int physics;
    int chemistry;
};

int main() {
    int num_students, i;
    float avg_maths = 0, avg_physics = 0, avg_chemistry = 0;

    printf("\nEnter the number of students : ");
    scanf("%d", &num_students);

    struct Student students[num_students];

    for (i = 0; i < num_students; i++) {
        printf("\nEnter name of the student : ");
        scanf("%s", students[i].name);
        printf("\nEnter P, C, and M marks : ");
        scanf("%d %d %d", &students[i].physics, &students[i].chemistry, &students[i].maths);

        // Input validation for marks
        if (students[i].physics < 0 || students[i].physics > 100 ||
            students[i].chemistry < 0 || students[i].chemistry > 100 ||
            students[i].maths < 0 || students[i].maths > 100) {
            printf("Invalid marks. Please enter marks between 0 and 100.\n");
            i--; // Decrement i to re-enter details for this student
        }
    }

    FILE *file = fopen("students_record.bin", "wb");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    fwrite(students, sizeof(struct Student), num_students, file);

    fclose(file);

    return 0;
}

