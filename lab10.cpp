
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Öðrenci yapýsý
struct Student {
    int studentNo;
    char name[50];
    float vize;
    float final;
    struct Student* next;
};

// Programda kullanýlacak genel deðiþkenler
struct Student* studentList = NULL;
int studentCount = 0;

// Öðrenci kaydý ekleme iþlemi
void addStudent() {
    struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));
    if (newStudent == NULL) {
        printf("Hafýza tahsisi baþarýsýz oldu.\n");
        return;
    }

    printf("Öðrenci Numarasý: ");
    scanf("%d", &newStudent->studentNo);

    printf("Ýsim: ");
    scanf("%s", newStudent->name);

    printf("Vize Notu: ");
    scanf("%f", &newStudent->vize);

    printf("Final Notu: ");
    scanf("%f", &newStudent->final);

    newStudent->next = studentList;
    studentList = newStudent;

    studentCount++;
    printf("Öðrenci kaydý eklendi.\n");
}

// Öðrenci kayýtlarýný listeleme iþlemi
void listStudents(int sortBy, float minLimit, float maxLimit) {
    if (studentList == NULL) {
        printf("Kayýtlý öðrenci yok.\n");
        return;
    }

    struct Student* current = studentList;
    printf("\nÖðrenci Listesi:\n");

    while (current != NULL) {
        if ((sortBy == 1 && current->vize >= minLimit && current->vize <= maxLimit) ||
            (sortBy == 2 && current->final >= minLimit && current->final <= maxLimit)) {
            printf("Öðrenci No: %d, Ýsim: %s, Vize: %.2f, Final: %.2f\n", 
                current->studentNo, current->name, current->vize, current->final);
        }
        current = current->next;
    }
}

// Öðrenci kaydýný güncelleme iþlemi
void updateStudent() {
    int studentNo;
    printf("Güncellenecek Öðrenci Numarasý: ");
    scanf("%d", &studentNo);

    struct Student* current = studentList;
    while (current != NULL) {
        if (current->studentNo == studentNo) {
            printf("Yeni Vize Notu: ");
            scanf("%f", &current->vize);

            printf("Yeni Final Notu: ");
            scanf("%f", &current->final);

            printf("Öðrenci kaydý güncellendi.\n");
            return;
        }
        current = current->next;
    }
    printf("Öðrenci bulunamadý.\n");
}

// Sýnýf ortalamasýný hesaplama iþlemi
void calculateClassAverage() {
    if (studentList == NULL) {
        printf("Kayýtlý öðrenci yok.\n");
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

    printf("Sýnýf Ortalamasý (Vize): %.2f\n", classAverageVize);
    printf("Sýnýf Ortalamasý (Final): %.2f\n", classAverageFinal);
}

// Ana menüyü gösterme iþlemi
void showMenu() {
    int choice;
    float minLimit, maxLimit;

    while (1) {
        printf("\n**** Öðrenci Bilgi Sistemi ****\n");
        printf("1- Yeni Kayýt Ekleme\n");
        printf("2- Kayýt Listeleme\n");
        printf("3- Kayýt Güncelleme\n");
        printf("4- Sýnýf Ortalamasý Hesapla\n");
        printf("5- Ortalamaya Göre En Baþarýlý Öðrenci Bilgisini Göster\n");
        printf("6- Çýkýþ\n");
        printf("Seçiminizi yapýn: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                printf("Listeleme türünü seçin:\n");
                printf("1- Vize Notuna Göre Listele\n");
                printf("2- Final Notuna Göre Listele\n");
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
                // Ortalamaya göre en baþarýlý öðrenciyi gösterme iþlemi eklenmeli.
                break;
            case 6:
                exit(0);
            default:
                printf("Geçersiz seçenek. Lütfen tekrar deneyin.\n");
        }
    }
}

int main() {
    showMenu();
    return 0;
}
