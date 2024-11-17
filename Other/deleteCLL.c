#include <stdio.h>
#include <stdlib.h>

//Write a delete function for CLL.
//CLL için bir silme fonksiyonu yazın

typedef struct deleteCLL
{
    int data;
    struct deleteCLL *next;
}node;


void deletenode(node **head, int x) {
    if (*head == NULL) {
        return;
    }

    node *current = *head, *temp;

    if ((*head)->data == x) {
        if ((*head)->next == *head) {
            free(*head);
            *head = NULL;
            return;
        }
        while (current->next != *head) {
            current = current->next;
        }
        current->next = (*head)->next;
        temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }

    while (current->next != *head && current->next->data != x) {
        current = current->next;
    }

    if (current->next->data == x) {
        temp = current->next;
        current->next = temp->next;
        free(temp);
    }
}

void printList(node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    node *temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

void insert(node **head, int data) {
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head;
        return;
    }
    node *temp = *head;
    while (temp->next != *head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = *head;
}

int main() {
    node *head = NULL;

    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);

    printf("Original List: ");
    printList(head);

    deletenode(&head, 3);
    printf("After deleting 3: ");
    printList(head);

    deletenode(&head, 1);
    printf("After deleting 1: ");
    printList(head);

    deletenode(&head, 4);
    printf("After deleting 4: ");
    printList(head);

    deletenode(&head, 2);
    printf("After deleting 2: ");
    printList(head);

    return 0;
}