#include <stdio.h>
#include <stdlib.h>
// Define a structure for a node in the linked list
struct Node {
int data;
struct Node* next;
};
// Function to create a new node
struct Node* createNode(int data) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct
Node));
if (newNode == NULL) {
fprintf(stderr, "Memory allocation failed\n");
exit(1);
}
newNode->data = data;
newNode->next = NULL;
return newNode;
}
// Function to insert a node at the beginning of the linked list
struct Node* insertAtBeginning(struct Node* head, int data) {
struct Node* newNode = createNode(data);
newNode->next = head;
return newNode;
}
// Function to insert a node at the end of the linked list
struct Node* insertAtEnd(struct Node* head, int data) {
struct Node* newNode = createNode(data);
if (head == NULL) {
return newNode;
}
struct Node* current = head;
while (current->next != NULL) {
current = current->next;
}
current->next = newNode;
return head;
}
// Function to insert a node after a specific node
struct Node* insertAfter(struct Node* head, int data, int
searchValue) {
struct Node* newNode = createNode(data);
struct Node* current = head;
while (current != NULL && current->data != searchValue) {
current = current->next;
}
if (current == NULL) {
printf("Node with search value not found\n");
free(newNode); // Free the allocated node
return head;
}
newNode->next = current->next;
current->next = newNode;
return head;
}
// Function to delete a node with a specific value
struct Node* deleteNode(struct Node* head, int data) {
struct Node* current = head;
struct Node* prev = NULL;
while (current != NULL && current->data != data) {
prev = current;
current = current->next;
}
if (current == NULL) {
printf("Node with value not found\n");
return head;
}
if (prev == NULL) {
head = current->next;
} else {
prev->next = current->next;
}
free(current);
return head;
}
// Function to search for a node with a specific value
struct Node* searchNode(struct Node* head, int data) {
struct Node* current = head;
while (current != NULL) {
if (current->data == data) {
return current;
}
current = current->next;
}
return NULL; // Node not found
}
// Function to print the linked list
void printList(struct Node* head) {
struct Node* current = head;
while (current != NULL) {
printf("%d -> ", current->data);
current = current->next;
}
printf("NULL\n");
}
// Function to free the memory used by the linked list
void freeList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
}


int len(struct Node* head){
    int count = 0;
    while(head!= NULL){
        count ++;
        head = head->next;
    }
    return count;
};
int* getArray(struct Node* head){
    int *array,n,i;
    array = (int*)malloc(len(head)*sizeof(int));
    n = len(head);
    for(i=0;i<n;i++){
            array[i] = head->data;
            head = head->next;
    }
    return array;
}

int main() {
    struct Node* head = NULL;
    head = insertAtBeginning(head, 3);
    head = insertAtBeginning(head, 2);
    head = insertAtBeginning(head, 1);
    head = insertAtEnd(head, 4);
    head = insertAtEnd(head, 5);
    printf("Linked List: ");
    printList(head);

    int *temp,n,i;
    n = len(head);
    temp = getArray(head);
    for(i=0;i<n;i++){           //printing the array
        printf("%d ",*(temp+i));
    }

    freeList(head);
    return 0;
}
