#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
} *head = NULL;

// Function to insert node
void insert(int value) {
    struct node *ptr, *tmp;
    ptr = (struct node*) malloc(sizeof(struct node));
    ptr->data = value;
    ptr->next = NULL;
    ptr->prev = NULL;

    if (head == NULL) {
        head = ptr;
    } else {
        tmp = head;
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = ptr;
        ptr->prev = tmp;
    }
}

// Function to delete the node by value
void delete(int value) {
    if (head == NULL) {
        // No node exists
        return;
    }

    struct node *tmp = head;

    // Case when the node to be deleted is the head
    if (tmp->data == value) {
        head = tmp->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        free(tmp);
        return;
    }

    while (tmp->next != NULL && tmp->next->data != value) {
        tmp = tmp->next;
    }

    if (tmp->next == NULL) {
        // Entered value to delete is not in node so it will do nothing
        return;
    }

    struct node *del = tmp->next;
    tmp->next = del->next;
    if (del->next != NULL) {
        del->next->prev = tmp;
    }
    free(del);
}

// Function to traverse the node
void traverse() {
    struct node *tmp = head;
    while (tmp != NULL) {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}

int main () {
    int n, task, value;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &task, &value);
        if (task == 1) {
            insert(value);
        } else if (task == 2) {
            delete(value);
        }
    }
    traverse();
    return 0;
}
