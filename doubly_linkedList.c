#include <stdio.h>
#include <stdlib.h>
//doubly linked list 
struct node{
    int data;
    struct node *next;
    struct node *previous;
}*head =NULL;

//function to insert node at last
void create(int value){
    struct node *ptr,*tmp;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->next=NULL;
    ptr->previous=NULL;
    ptr->data =value;
    if(head==NULL)
    head = ptr;
    else{
        tmp = head;
        while(tmp->next!=NULL){
            tmp =tmp->next;
        }
        tmp->next = ptr;
        ptr->previous = tmp;
    }
}

//function to delete node at index
void delete1(int value){
    return;
}

//function to traverse the node;
void traverse(){
    struct node *tmp;
    tmp = head;
    if(head==NULL)
    return;
    else{
        while(tmp != NULL){
        printf("%d ",tmp->data);
        tmp=tmp->next;
        }
        printf("\n");
    }
    
}
int main(){
    int n,task,value;
    printf("Enter the number of operations: ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d %d",&task,&value);
        if(task==1)
        create(value);
        else if(task ==2)
        delete1(value);
    }
    traverse();
    return 0;
}
