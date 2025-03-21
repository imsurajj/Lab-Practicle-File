#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node in the linked list
struct node {
    int data; // Data part of the node
    struct node* next; // Pointer to the next node
};

// Function to traverse and print the linked list
void traversal(struct node* head) {
    struct node *ptr = head;
    while (ptr != NULL) { // Traverse until the end of the list
        printf("%d \n", ptr->data); // Print the data of the current node
        ptr = ptr->next; // Move to the next node
    }
}

// Function to insert a new node at the beginning of the linked list
struct node* insertionAtBeginning(struct node* head, int data) {
    // Allocate memory for the new node
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data; // Assign data to the new node
    new_node->next = head; // Point the new node to the current head
    return new_node; // Return the new node as the new head
}

int main() {
    // Allocate memory for the nodes
    struct node* head = (struct node*)malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    struct node* third = (struct node*)malloc(sizeof(struct node));
    struct node* fourth = (struct node*)malloc(sizeof(struct node));

    // Initialize the linked list with data and connections
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = NULL;

    // Print the linked list before insertion
    printf("Before Insertion\n");
    traversal(head);

    // Insert a new node at the beginning with data 0
    head = insertionAtBeginning(head, 0);

    // Print the linked list after insertion
    printf("After Insertion\n");
    traversal(head);

    return 0;
}