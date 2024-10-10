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

//function to insert new node at beginning index 0
void headInsert(){
    struct node *add;
    add = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value: ");
    scanf("%d",&add->data);
    add ->next =head;
    head = add;
    printf("Node inserted successfully at position 1");

}

//function to insert new node at last position
void tailInsert(){
    struct node *lastAdd,*tmp;
    lastAdd = (struct node *)malloc(sizeof(struct node));
    lastAdd->next =NULL;
    printf("\nEnter the value: ");
    scanf("%d",&lastAdd->data);
    tmp =head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = lastAdd;

} 

//function to insert node at any position
void insert(){
    int index;
    struct node *ptr,*tmp;
    ptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter the value: ");
    scanf("%d",&ptr->data);
    printf("Enter the index to insert: ");
    scanf("%d",&index);
    tmp =head;
    if(index==0){
        ptr->next = head;
        head = ptr;
    }
    else{
        for(int i =0;i<index-1;i++){
            tmp = tmp->next;
        }
        ptr->next =tmp->next;
        tmp->next=ptr;
    }
}

//function to count the number of nodes
void count(){
    struct node *tmp;
    int count =0;
    tmp = head;
    while(tmp!=NULL){
        count++;
        tmp = tmp->next;
    }
    printf("\nNo. of nodes = %d",count);
}

//function to delete fist node
void headDelete(){
    struct node *tmp;
    tmp =head;
    head = tmp->next;
    printf("First node deleted !");
}

//function to delete last node
void tailDelete(){
    struct node *tmp;
    tmp = head;
    while(tmp->next!=NULL){
        tmp = tmp->next;
    }
    tmp->next =NULL;
    printf("Last node deleted !");
}

//function  to display nodes
void display(){
    struct node *new;
    new = head;
    if(head == NULL)
    printf("\nNo node exist");
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
    printf("\n\n1-Create node\n2-Display node\n3-Insert new node at position 1");
    printf("\n4-Insert new node at last position\n5-Insert at given index\n6-Count no. of nodes");
    printf("\n7-Delete the first node\n8-Delete last node\n9-exit\n");
    printf("\nEnter your choice: ");
    
    scanf("%d",&choice);
   
        if(choice == 1)
        create();
        else if(choice == 2)
        display();
        else if(choice ==3)
        headInsert();
        else if(choice == 4)
        tailInsert();
        else if(choice == 5)
        insert();
        else if(choice == 6)
        count();
        else if(choice == 7)
        headDelete();
        else if(choice == 8)
        tailDelete();
        else if(choice == 9)
        break;
        else
        printf("Enter the right choice: 1 2 3 4 5 6 7");
    }
}
