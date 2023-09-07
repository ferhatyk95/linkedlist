#include <stdio.h>
#include <stdlib.h>

struct node {
    int number;
    struct node *next;
};

// Function to add a new node to the beginning of the list
struct node *addToBeginning(struct node *head, int num) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->number = num;
    newNode->next = head;
    return newNode;
}

// Function to add a new node to the end of the list
struct node *addToEnd(struct node *head, int num) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->number = num;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    struct node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;

    return head;
}

// Function to print the linked list
void printList(struct node *head) {
    struct node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->number);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct node *head = NULL;
    int num;

    printf("Enter numbers (-1 to stop):\n");

    while (1) {
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        if (num % 2 == 1) {
            head = addToBeginning(head, num); // Add odd numbers to the beginning
        } else {
            head = addToEnd(head, num); // Add even numbers to the end
        }
    }

    printf("Modified Linked List:\n");
    printList(head);

    // Free the memory used by the linked list
    struct node *current = head;
    while (current != NULL) {
        struct node *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}





