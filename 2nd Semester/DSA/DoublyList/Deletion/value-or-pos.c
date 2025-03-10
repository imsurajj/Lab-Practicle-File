#include <stdio.h>
#include <stdlib.h>

// Structure for a node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to insert a node at the end
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

// Function to delete a node by value
void deleteByValue(struct Node** head, int value) {
    struct Node* temp = *head;

    // If list is empty
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    // If head node holds the value
    if (temp != NULL && temp->data == value) {
        *head = temp->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(temp);
        return;
    }

    // Searching for the node
    while (temp != NULL && temp->data != value) {
        temp = temp->next;
    }

    // If node not found
    if (temp == NULL) {
        printf("Value not found in the list.\n");
        return;
    }

    // Remove the node
    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    if (temp->prev != NULL)
        temp->prev->next = temp->next;

    free(temp);
}

// Function to delete a node by position
void deleteByPosition(struct Node** head, int position) {
    struct Node* temp = *head;

    // If list is empty
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    // If deleting the first node
    if (position == 1) {
        *head = temp->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(temp);
        return;
    }

    // Traverse to the node at the given position
    for (int i = 1; temp != NULL && i < position; i++) {
        temp = temp->next;
    }

    // If position is out of bounds
    if (temp == NULL) {
        printf("Invalid position.\n");
        return;
    }

    // Remove the node
    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    if (temp->prev != NULL)
        temp->prev->next = temp->next;

    free(temp);
}

// Function to print the doubly linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    printf("Doubly Linked List: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct Node* head = NULL;

    // Insert elements
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);
    insertEnd(&head, 50);

    printf("Original List:\n");
    printList(head);

    // Delete by value
    deleteByValue(&head, 30);
    printf("\nAfter deleting value 30:\n");
    printList(head);

    // Delete by position
    deleteByPosition(&head, 2);
    printf("\nAfter deleting node at position 2:\n");
    printList(head);

    return 0;
}
