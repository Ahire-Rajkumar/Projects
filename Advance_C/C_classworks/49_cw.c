#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int maths;
    int physics;
    int chemistry;
};

int main() {
    struct Student students[10]; // Assuming a maximum of 10 students
    int i, num_students;

    FILE *file = fopen("students_record.bin", "rb");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    fseek(file, 0, SEEK_END);
    num_students = ftell(file) / sizeof(struct Student);
    fseek(file, 0, SEEK_SET);

    fread(students, sizeof(struct Student), num_students, file);

    fclose(file);

    printf("--------------------------------------------------------------\n");
    printf("Name\tMaths\tPhysics\tChemistry\n");
    printf("--------------------------------------------------------------\n");

    float avg_maths = 0, avg_physics = 0, avg_chemistry = 0;
    for (i = 0; i < num_students; i++) {
        printf("%s\t%d\t%d\t%d\n", students[i].name, students[i].maths, students[i].physics, students[i].chemistry);
        avg_maths += students[i].maths;
        avg_physics += students[i].physics;
        avg_chemistry += students[i].chemistry;
    }

    avg_maths /= num_students;
    avg_physics /= num_students;
    avg_chemistry /= num_students;

    printf("--------------------------------------------------------------\n");
    printf("Average\t%.2f\t%.2f\t%.2f\n", avg_maths, avg_physics, avg_chemistry);
    printf("--------------------------------------------------------------\n");

    return 0;
}

