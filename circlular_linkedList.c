#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node {
    int data;
    struct node *next;
} *head = NULL;

// Function to insert a node
void insert(int value) {
    struct node *ptr, *tmp;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = value;

    if (head == NULL) {
        head = ptr;
        head->next = head; // Point the new node to itself to form a circle
    } else {
        tmp = head;
        while (tmp->next != head) { // Find the last node
            tmp = tmp->next;
        }
        tmp->next = ptr;
        ptr->next = head; // Maintain the circular link
    }
}

// Function to delete a node by value
void delete(int value) {
    if (head == NULL) {
        return;
    }

    struct node *tmp = head, *prev = NULL;

    // If the node to be deleted is the head
    if (head->data == value) {
        while (tmp->next != head) { // Find the node before head
            tmp = tmp->next;
        }
        if (head->next == head) { // Only one node in the list
            free(head);
            head = NULL;
        } else {
            tmp->next = head->next;
            free(head);
            head = tmp->next;
        }
        return;
    }

    prev = head;
    tmp = head->next;
    while (tmp != head && tmp->data != value) {
        prev = tmp;
        tmp = tmp->next;
    }

    if (tmp == head) { // Node with the given value not found
        return;
    }

    // Node found and needs to be deleted
    prev->next = tmp->next;
    free(tmp);
}

// Function to display the circular linked list
void display() {
    struct node *tmp = head;
    // while (1) {
    //     printf("%d ", tmp->data);
    //     tmp = tmp->next;
    //     if (tmp == head) {
    //         break;
    //     }
    // }
    // printf("\n");
    do{
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }while(tmp!=head);
    printf("\n");
}

int main() {
    int n, value, task;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &task, &value);
        if (task == 1) {
            insert(value);
        } else if (task == 2) {
            delete(value);
        }
    }

    display();
    return 0;
}
