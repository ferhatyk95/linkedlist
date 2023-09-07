#include <stdio.h>
#include <stdlib.h>

struct node {
    int number;
    struct node *sonraki;
};

struct node *cut_last_add_head(struct node *head) {
    if (head == NULL || head->sonraki == NULL) {
        // Boþ liste veya tek elemanlý liste ise deðiþiklik yapmaya gerek yok.
        return head;
    }

    struct node *p = head;
    struct node *q = NULL;
    
    // Son düðüme ilerle
    while (p->sonraki != NULL) {
        q = p;
        p = p->sonraki;
    }
    
    // Kesme iþlemi
    q->sonraki = NULL;
    p->sonraki = head;
    head = p;

    return head;
}

int main() {
    int n, i;

    // Fonksiyona gönderilecek listeyi oluþturma kýsmý
    printf("Kaç eleman girilecek?\n");
    scanf("%d", &n);

    struct node *head = NULL;
    struct node *p = NULL;

    for (i = 0; i < n; i++) {
        struct node *yeni = (struct node *)malloc(sizeof(struct node));
        yeni->sonraki = NULL;

        printf("Enter number: ");
        scanf("%d", &yeni->number);

        if (head == NULL) {
            head = yeni;
            p = head;
        } else {
            p->sonraki = yeni;
            p = yeni;
        }
    }

    // Liste oluþturuldu, þimdi fonksiyonu çaðýr
    head = cut_last_add_head(head);

    // Liste içeriðini ekrana yazdýrma
    p = head;
    while (p != NULL) {
        printf("%d ", p->number);
        p = p->sonraki;
    }

    // Belleði temizle
    p = head;
    while (p != NULL) {
        struct node *temp = p;
        p = p->sonraki;
        free(temp);
    }

    return 0;
}

