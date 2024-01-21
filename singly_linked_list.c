#include <stdio.h>
#include <stdlib.h>

// Define a structure for a linked list node
typedef struct node
{
    int num;
    struct node *next;
} node;

// Function prototypes
void printList(node *head);
void insert_at_beginning(int number, node **address_of_head);
void insert_at_end(int number, node **address_of_head);
void insert_at_index(int index, int number, node **address_of_head);
void delete_list(node **address_of_head);

int main()
{
    // Create the head of the linked list and allocate memory for it
    struct node *head = (node *)malloc(sizeof(node));
    if (head == NULL)
    {
        printf("Failed to allocate memory for a new node!\n");
        exit(1);
    }
    head->num = 10;
    head->next = NULL;

    // Print the initial list
    printList(head);

    // Create a new node and allocate memory for it
    node *current = (node *)malloc(sizeof(node));
    if (current == NULL)
    {
        free(head);
        printf("Failed to allocate memory for a new node!\n");
        exit(1);
    }
    current->num = 14;
    current->next = NULL;

    // Point the next pointer of the head to the new node
    head->next = current;

    // Print the updated list
    printList(head);

    // Create another new node and allocate memory for it
    current = (node *)malloc(sizeof(node));
    if (current == NULL)
    {
        delete_list(&head);
        printf("Failed to allocate memory!\n");
        exit(1);
    }
    current->num = 52;
    current->next = NULL;

    // Point the next pointer of the previous node to the new node
    head->next->next = current;

    // Print the updated list
    printList(head);

    // Insert a node at the end of the list
    insert_at_end(8520, &head);

    // Print the updated list
    printList(head);

    // Insert a node at the beginning of the list
    insert_at_beginning(12, &head);

    // Print the updated list
    printList(head);

    // Insert a node at a specific index in the list
    insert_at_index(0, 1, &head);

    // Print the updated list
    printList(head);

    // Delete the entire list
    delete_list(&head);

    // Print the final state of the list
    printList(head);

    return 0;
}

// Function to print the elements of the linked list
void printList(node *first)
{
    printf("Printing the list.\n");
    int count = 0;
    while (first != NULL)
    {
        count++;
        printf("%d ", first->num);
        first = first->next;
    }

    // Print the total count of the list
    if (count > 0)
    {
        printf("\nThe total count of the list is: %d\n\n", count);
    }
    else
    {
        printf("The list is empty!\n");
    }
}

// Function to insert a node at the beginning of the list
void insert_at_beginning(int number, node **address_of_head)
{
    // Create a new node and allocate memory for it
    node *temp = (node *)malloc(sizeof(node));
    if (temp == NULL)
    {
        printf("Failed to allocate memory for a new node!\n");
        delete_list(address_of_head);
        exit(1);
    }

    // Set the values for the new node
    temp->num = number;
    temp->next = *address_of_head;

    // Update the head pointer to point to the new node
    *address_of_head = temp;
}

// Function to insert a node at the end of the list
void insert_at_end(int number, node **address_of_head)
{
    // Traverse the list to find the last node
    node *temp = *address_of_head;
    node *current = (node *)malloc(sizeof(node));
    if (current == NULL)
    {
        printf("Failed to allocate memory for a new node!\n");
        delete_list(address_of_head);
        exit(1);
    }

    // Set the values for the new node
    current->num = number;
    current->next = NULL;

    // Connect the last node to the new node
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = current;
}

// Function to insert a node at a specific index in the list
void insert_at_index(int index, int number, node **address_of_head)
{
    int i = 0;
    node *temp = *address_of_head;
    node *current = (node *)malloc(sizeof(node));
    if (current == NULL)
    {
        printf("Failed to allocate memory for a new node!\n");
        delete_list(address_of_head);
        exit(1);
    }

    // Set the values for the new node
    current->num = number;

    // If index is 0, insert at the beginning
    if (index == 0)
    {
        insert_at_beginning(number, address_of_head);
        return;
    }

    // Traverse the list to the node before the specified index
    while (i < (index - 1))
    {
        temp = temp->next;
        i++;
    }

    // Connect the new node to the list at the specified index
    current->next = temp->next;
    temp->next = current;
}

// Function to delete the entire list
void delete_list(node **address_of_head)
{
    node *temp = *address_of_head;

    // Traverse the list and free each node
    while (temp != NULL)
    {
        *address_of_head = temp->next;
        free(temp);
        temp = *address_of_head;
    }
    free(temp);
}
