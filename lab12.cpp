#include <stdio.h>
#include <stdlib.h>

struct Student {
    int studentNo;
    char name[50];
    char department[50];
};

// Function to add a student record to the file
void addStudent(FILE *file) {
    struct Student student;

    printf("Enter Student Number: ");
    scanf("%d", &student.studentNo);

    printf("Enter Name: ");
    scanf("%s", student.name);

    printf("Enter Department: ");
    scanf("%s", student.department);

    fseek(file, 0, SEEK_END); // Dosyanýn sonuna gidilir
    fwrite(&student, sizeof(struct Student), 1, file);

    printf("Student Record Added Successfully.\n");
}

// Function to search for a student by student number
void searchStudent(FILE *file) {
    int studentNo;

    printf("Enter Student Number to Search: ");
    scanf("%d", &studentNo);

    struct Student student;
    fseek(file, 0, SEEK_SET); // Dosyanýn baþýna gidilir

    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        if (student.studentNo == studentNo) {
            printf("Student Found:\n");
            printf("Student Number: %d\n", student.studentNo);
            printf("Name: %s\n", student.name);
            printf("Department: %s\n", student.department);
            return;
        }
    }

    printf("Student with Student Number %d not found.\n", studentNo);
}

int main() {
    FILE *file;
    file = fopen("student_records.dat", "ab+");

    if (file == NULL) {
        perror("Error opening the file");
        return 1;
    }

    int choice;
    while (1) {
        printf("\n**** Student Record Management ****\n");
        printf("1. Add Student Record\n");
        printf("2. Search by Student Number\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(file);
                break;
            case 2:
                searchStudent(file);
                break;
            case 3:
                fclose(file);
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
//lab12 soru 3
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int studentNo;
    char name[50];
    char department[50];
};

struct StudentList {
    struct Student student;
    struct StudentList *next;
};

// Fonksiyon: Yeni öðrenci kaydý eklemek için
void addStudent(FILE *file, struct StudentList **list) {
    struct Student student;

    printf("Enter Student Number: ");
    scanf("%d", &student.studentNo);

    printf("Enter Name: ");
    scanf("%s", student.name);

    printf("Enter Department: ");
    scanf("%s", student.department);

    fseek(file, 0, SEEK_END); // Dosyanýn sonuna gidilir
    fwrite(&student, sizeof(struct Student), 1, file);

    // Yeni öðrenci kaydýný listeye ekleyelim
    struct StudentList *newStudent = (struct StudentList *)malloc(sizeof(struct StudentList));
    newStudent->student = student;
    newStudent->next = *list;
    *list = newStudent;

    printf("Student Record Added Successfully.\n");
}

// Fonksiyon: Tüm öðrenci kayýtlarýný listeleyin
void listStudents(struct StudentList *list) {
    printf("Student Records:\n");
    while (list != NULL) {
        printf("Student Number: %d\n", list->student.studentNo);
        printf("Name: %s\n", list->student.name);
        printf("Department: %s\n\n", list->student.department);
        list = list->next;
    }
}

int main() {
    FILE *file;
    file = fopen("student_records.dat", "ab+");

    if (file == NULL) {
        perror("Error opening the file");
        return 1;
    }

    struct StudentList *studentList = NULL;

    int choice;
    while (1) {
        printf("\n**** Student Record Management ****\n");
        printf("1. Add Student Record\n");
        printf("2. List All Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(file, &studentList);
                break;
            case 2:
                listStudents(studentList);
                break;
            case 3:
                fclose(file);
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
