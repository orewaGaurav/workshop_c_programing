#include <stdio.h>
#include <stdlib.h>

//self referential structure
struct node {
    int data;
    struct node *next;
} *head = NULL;

//function to create node
void create(){
    struct node *ptr,*tmp;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->next = NULL;
    printf("Enter the value: \n");
    scanf("%d",&ptr->data);
    //check if its first node or not
    if(head == NULL){
        head = ptr;
    }
    else{
        tmp = head;
        while(tmp->next != NULL){
        tmp = tmp->next;
        }
        tmp->next = ptr;

    }
}

//function  to display nodes
void display(){
    struct node *new;
    new = head;
    if(head == NULL)
    printf("No node exist");
    else{
        while(new != NULL){
        printf("%d ",new->data);
        new = new->next;
        }
    }
}

//function to insert new node at beginning index 0
void insert(){
    struct node *add;
    add = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value: ");
    scanf("%d",&add->data);
    add ->next =head;
    head = add;
    printf("node inserted successfully");

}

//main function
int main(){
    int choice;
    //while k bahar printf nai likhna hai infinite loop ho jayega nai to
     while(1){
    printf("\n1-Create node\n2-Display node\n3-Insert new node at position 1\n4-Exit\nEnter your choice: ");
    scanf("%d",&choice);
   
        if(choice == 1)
        create();
        else if(choice == 2)
        display();
        else if(choice ==3)
        insert();
        else if(choice == 4)
        break;
        else
        printf("Enter the right choice: 1\t2\t3");
    }
}
