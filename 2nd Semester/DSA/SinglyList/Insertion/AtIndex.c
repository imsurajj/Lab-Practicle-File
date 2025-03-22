#include<stdio.h>
#include<stdlib.h>

// Node creation structure
struct node {
    int data; // Data part of the node
    struct node * next; // Pointer to the next node
};

// Function to traverse all the nodes and print their data
void traversal(struct node *head)
{
    struct node * ptr = head; // Start from the head node
    while(ptr != NULL) // Traverse until the end of the list
    {
        printf("%d \n", ptr->data); // Print the data of the current node
        ptr = ptr->next; // Move to the next node
    }
}

// Function to insert a new node at a specific index
struct node* insertionAtIndex(struct node *head, int data, int index)
{
    struct node * new_node = (struct node *)malloc(sizeof(struct node)); // Allocate memory for the new node
    struct node * ptr = head; // Start from the head node
    int i = 0;

    // Traverse to the node just before the specified index
    while(i != index - 1) {
        ptr = ptr->next;
        i++;
    }

    // Insert the new node at the specified index
    new_node->next = ptr->next; // Link the new node to the next node
    new_node->data = data; // Assign data to the new node
    ptr->next = new_node; // Link the previous node to the new node

    return head; // Return the updated head pointer
}

void main()
{
    int idx;
    printf("Enter the index between 1 to 4 to insertion "); // Prompt user for index input
    scanf("%d", &idx); // Read the index

    // Allocate memory for nodes and initialize the linked list
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    // Initialize the data and links for each node
    head->data = 0;
    head->next = first;
    first->data = 1;
    first->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = NULL;

    // Traverse and print the initial list
    traversal(head);

    printf("After Index Insertion "); // Indicate insertion operation
    insertionAtIndex(head, 13, 1); // Insert a new node with data 13 at index 1

    // Traverse and print the updated list
    traversal(head);
}