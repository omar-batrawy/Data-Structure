#include <stdio.h>
#include <conio.h>

<<<<<<< HEAD
struct Node
{

    int data;

    struct Node *next;
};

struct Node *createNode(int data)
{

    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
void insertAtBeginning(struct Node **head, int data)
{

    struct Node *newnode = createNode(data);
    newnode->next = *head;
    *head = newnode;
}

void displayList(struct Node *head)
{
    struct Node *currNode = head;
    while (currNode != NULL)
    {
        printf("%d -> ", currNode->data);
        currNode = currNode->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL;

    // Insert nodes

    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 5);

    // Display the linked list
    displayList(head);

    return 0;
}
=======
void main() {
    int a = 10;
    
}
>>>>>>> 51dd4fd5c98b5453cf18f83d0daf2a0824d58912
