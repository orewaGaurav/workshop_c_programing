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
//main function
int main(){
    int choice;
    //while k bahar printf nai likhna hai infinite loop ho jayega nai to
     while(1){
    printf("\n1\tCreate node\n2\tDisplay node\n3\tExit\nEnter your choice: ");
    scanf("%d",&choice);
   
        if(choice == 1)
        create();
        else if(choice == 2)
        display();
        else if(choice == 3)
        break;
        else
        printf("Enter the right choice: 1\t2\t3");
    }
}
