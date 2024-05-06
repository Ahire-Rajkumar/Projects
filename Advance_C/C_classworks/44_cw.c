#include <stdio.h>
#include <stdlib.h>

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

        avg_maths += students[i].maths;
        avg_physics += students[i].physics;
        avg_chemistry += students[i].chemistry;
    }

    avg_maths /= num_students;
    avg_physics /= num_students;
    avg_chemistry /= num_students;

    printf("--------------------------------------------------------------\n");
    printf("Name\tMaths\tPhysics\tChemistry\n");
    printf("--------------------------------------------------------------\n");

    for (i = 0; i < num_students; i++) {
        printf("%s\t%d\t%d\t%d\n", students[i].name, students[i].maths, students[i].physics, students[i].chemistry);
    }

    printf("--------------------------------------------------------------\n");
    printf("Average\t%.2f\t%.2f\t%.2f\n", avg_maths, avg_physics, avg_chemistry);
    printf("--------------------------------------------------------------\n");

    return 0;
}

