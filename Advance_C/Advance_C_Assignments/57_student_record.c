/*
Name:Rajkumar Tulshidas Ahire
Date:19/04/2024
DescriptionWAP to Implement the student record using array of structures
Sample I/P and O/P:Test Case 1:
                   user@emertxe] ./student_record
                   Enter no.of students : 2
                   Enter no.of subjects : 2
                   Enter the name of subject 1 : Maths
                   Enter the name of subject 2 : Science
                   ----------Enter the student datails-------------
                   Enter the student Roll no. : 1
                   Enter the student 1 name : Nandhu
                   Enter Maths mark : 99
                   Enter Science mark : 91
                   ----------Enter the student datails-------------
                   Enter the student Roll no. : 2
                   Enter the student 2 name : Bindhu
                   Enter Maths mark : 88
                   Enter Science mark : 78
                   ----Display Menu----
                   1. All student details
                   2. Particular student details
                   Enter your choice : 2

                   ----Menu for Particular student----
                   1. Name.
                   2. Roll no.
                   Enter you choice : 1
                   Enter the name of the student : Nandhu
                   Roll No.   Name           Maths         Science       Average       Grade
                   1         Nandhu           99             91            95            A
                   Do you want to continue to display(Y/y) : n
*/

#include <stdio.h>
#include <string.h> // Include the string.h header for strcmp function

// Define the maximum number of subjects
#define MAX_SUBJECTS 10

// Define the structure for a student
struct Student {
    int rollNo;
    char name[50];
    int marks[MAX_SUBJECTS];
    float average;
    char grade;
};

int main() {
    int numStudents, numSubjects;
    
    // Input the number of students and subjects
    printf("Enter no.of students : ");
    scanf("%d", &numStudents);
    printf("Enter no.of subjects : ");
    scanf("%d", &numSubjects);
    
    // Input the subject names
    char subjectNames[MAX_SUBJECTS][50];
    for (int i = 0; i < numSubjects; i++) {
        printf("Enter the name of subject %d : ", i + 1);
        scanf("%s", subjectNames[i]);
    }
    
    // Declare an array of structures for students
    struct Student students[numStudents];
    
    // Input details for each student
    for (int i = 0; i < numStudents; i++) {
        printf("----------Enter the student datails-------------\n");
        printf("Enter the student Roll no. : ");
        scanf("%d", &students[i].rollNo);
        printf("Enter the student %d name : ", i + 1);
        scanf("%s", students[i].name);
        
        // Input marks for each subject
        for (int j = 0; j < numSubjects; j++) {
            printf("Enter %s mark : ", subjectNames[j]);
            scanf("%d", &students[i].marks[j]);
        }
        
        // Calculate average
        int totalMarks = 0;
        for (int j = 0; j < numSubjects; j++) {
            totalMarks += students[i].marks[j];
        }
        students[i].average = (float)totalMarks / numSubjects;
        
        // Assign grade
        if (students[i].average >= 90) {
            students[i].grade = 'A';
        } else if (students[i].average >= 80) {
            students[i].grade = 'B';
        } else if (students[i].average >= 70) {
            students[i].grade = 'C';
        } else if (students[i].average >= 60) {
            students[i].grade = 'D';
        } else {
            students[i].grade = 'F';
        }
    }
    
    // Display menu
    char choice;
    do {
        printf("----Display Menu----\n");
        printf("1. All student details\n");
        printf("2. Particular student details\n");
        printf("Enter your choice : ");
        scanf(" %c", &choice);
        
        if (choice == '1') {
            // Display all student details
            printf("Roll No.\tName\t\t");
            for (int i = 0; i < numSubjects; i++) {
                printf("%s\t", subjectNames[i]);
            }
            printf("Average\tGrade\n");
            for (int i = 0; i < numStudents; i++) {
                printf("%d\t\t%s\t\t", students[i].rollNo, students[i].name);
                for (int j = 0; j < numSubjects; j++) {
                    printf("%d\t", students[i].marks[j]);
                }
                printf("%.0f\t%c\n", students[i].average, students[i].grade);
            }
        } else if (choice == '2') {
            // Display particular student details
            int rollNo;
            printf("\n----Menu for Particular student----\n");
            printf("1. Name.\n");
            printf("2. Roll no.\n");
            printf("Enter your choice : ");
            int subChoice;
            scanf("%d", &subChoice);
            
            if (subChoice == 1) {
                char name[50];
                printf("Enter the name of the student : ");
                scanf("%s", name);
                for (int i = 0; i < numStudents; i++) {
                    if (strcmp(students[i].name, name) == 0) {
                        printf("Roll No.\tName\t\t");
                        for (int j = 0; j < numSubjects; j++) {
                            printf("%s\t", subjectNames[j]);
                        }
                        printf("Average\tGrade\n");
                        printf("%d\t\t%s\t\t", students[i].rollNo, students[i].name);
                        for (int j = 0; j < numSubjects; j++) {
                            printf("%d\t", students[i].marks[j]);
                        }
                        printf("%.0f\t%c\n", students[i].average, students[i].grade);
                        break;
                    }
                }
            } else if (subChoice == 2) {
                int rollNo;
                printf("Enter the roll no. of the student : ");
                scanf("%d", &rollNo);
                for (int i = 0; i < numStudents; i++) {
                    if (students[i].rollNo == rollNo) {
                        printf("Roll No.\tName\t\t");
                        for (int j = 0; j < numSubjects; j++) {
                            printf("%s\t", subjectNames[j]);
                        }
                        printf("Average\tGrade\n");
                        printf("%d\t\t%s\t\t", students[i].rollNo, students[i].name);
                        for (int j = 0; j < numSubjects; j++) {
                            printf("%d\t", students[i].marks[j]);
                        }
                        printf("%.2f\t%c\n", students[i].average, students[i].grade);
                        break;
                    }
                }
            } else {
                printf("Invalid choice\n");
            }
        }
        
        printf("Do you want to continue to display(Y/y) : ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');

    return 0;
}

