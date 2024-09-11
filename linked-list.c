#include <stdio.h>
#include <stdlib.h>

struct slist{
    int data;
    struct slist *next;
}*start = NULL;
typedef struct slist node;

// function to create a list
void create(){
    node *tmp,*tmp1;
    tmp = (node*)malloc(sizeof(node));
    tmp->next = NULL;
    printf("Enter the element of the list: \n");
    scanf("%d",&tmp->data);
    if(start == NULL){
        start = tmp;
    }
    else{
        tmp1 = start;
        while(tmp1->next != NULL){
            tmp1 = tmp1->next;
        }
        tmp1->next = tmp;
    }
}

// function to display the list
void display(){
    node *dis;
    dis=start;
    if(dis == NULL){
        printf("Empty list: \n");
    }
    else{
        while(dis != NULL){
            printf("%d ",dis->data);
            dis = dis->next;
        }
    }
}

int main(){
    int choice;
    while(1){
        printf("\n1-create list\n2-display list\n3-exit\nEnter your choice:\n");
        scanf("%d",&choice);
        if(choice == 1){
            create();
        }
        else if(choice == 2){
            display();
        }
        else if (choice == 3){
            break;
        }
        else{
            printf("Enter a valid choice- \n");
        }
    }
}