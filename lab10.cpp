
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ��renci yap�s�
struct Student {
    int studentNo;
    char name[50];
    float vize;
    float final;
    struct Student* next;
};

// Programda kullan�lacak genel de�i�kenler
struct Student* studentList = NULL;
int studentCount = 0;

// ��renci kayd� ekleme i�lemi
void addStudent() {
    struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));
    if (newStudent == NULL) {
        printf("Haf�za tahsisi ba�ar�s�z oldu.\n");
        return;
    }

    printf("��renci Numaras�: ");
    scanf("%d", &newStudent->studentNo);

    printf("�sim: ");
    scanf("%s", newStudent->name);

    printf("Vize Notu: ");
    scanf("%f", &newStudent->vize);

    printf("Final Notu: ");
    scanf("%f", &newStudent->final);

    newStudent->next = studentList;
    studentList = newStudent;

    studentCount++;
    printf("��renci kayd� eklendi.\n");
}

// ��renci kay�tlar�n� listeleme i�lemi
void listStudents(int sortBy, float minLimit, float maxLimit) {
    if (studentList == NULL) {
        printf("Kay�tl� ��renci yok.\n");
        return;
    }

    struct Student* current = studentList;
    printf("\n��renci Listesi:\n");

    while (current != NULL) {
        if ((sortBy == 1 && current->vize >= minLimit && current->vize <= maxLimit) ||
            (sortBy == 2 && current->final >= minLimit && current->final <= maxLimit)) {
            printf("��renci No: %d, �sim: %s, Vize: %.2f, Final: %.2f\n", 
                current->studentNo, current->name, current->vize, current->final);
        }
        current = current->next;
    }
}

// ��renci kayd�n� g�ncelleme i�lemi
void updateStudent() {
    int studentNo;
    printf("G�ncellenecek ��renci Numaras�: ");
    scanf("%d", &studentNo);

    struct Student* current = studentList;
    while (current != NULL) {
        if (current->studentNo == studentNo) {
            printf("Yeni Vize Notu: ");
            scanf("%f", &current->vize);

            printf("Yeni Final Notu: ");
            scanf("%f", &current->final);

            printf("��renci kayd� g�ncellendi.\n");
            return;
        }
        current = current->next;
    }
    printf("��renci bulunamad�.\n");
}

// S�n�f ortalamas�n� hesaplama i�lemi
void calculateClassAverage() {
    if (studentList == NULL) {
        printf("Kay�tl� ��renci yok.\n");
        return;
    }

    struct Student* current = studentList;
    float totalVize = 0.0;
    float totalFinal = 0.0;

    while (current != NULL) {
        totalVize += current->vize;
        totalFinal += current->final;
        current = current->next;
    }

    float classAverageVize = totalVize / studentCount;
    float classAverageFinal = totalFinal / studentCount;

    printf("S�n�f Ortalamas� (Vize): %.2f\n", classAverageVize);
    printf("S�n�f Ortalamas� (Final): %.2f\n", classAverageFinal);
}

// Ana men�y� g�sterme i�lemi
void showMenu() {
    int choice;
    float minLimit, maxLimit;

    while (1) {
        printf("\n**** ��renci Bilgi Sistemi ****\n");
        printf("1- Yeni Kay�t Ekleme\n");
        printf("2- Kay�t Listeleme\n");
        printf("3- Kay�t G�ncelleme\n");
        printf("4- S�n�f Ortalamas� Hesapla\n");
        printf("5- Ortalamaya G�re En Ba�ar�l� ��renci Bilgisini G�ster\n");
        printf("6- ��k��\n");
        printf("Se�iminizi yap�n: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                printf("Listeleme t�r�n� se�in:\n");
                printf("1- Vize Notuna G�re Listele\n");
                printf("2- Final Notuna G�re Listele\n");
                scanf("%d", &choice);

                printf("Minimum Not Limiti: ");
                scanf("%f", &minLimit);

                printf("Maximum Not Limiti: ");
                scanf("%f", &maxLimit);

                listStudents(choice, minLimit, maxLimit);
                break;
            case 3:
                updateStudent();
                break;
            case 4:
                calculateClassAverage();
                break;
            case 5:
                // Ortalamaya g�re en ba�ar�l� ��renciyi g�sterme i�lemi eklenmeli.
                break;
            case 6:
                exit(0);
            default:
                printf("Ge�ersiz se�enek. L�tfen tekrar deneyin.\n");
        }
    }
}

int main() {
    showMenu();
    return 0;
}
