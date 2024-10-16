#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
}*head =NULL;

void insert(int value){
	struct node *ptr,*tmp;
	ptr = (struct node *)malloc(sizeof(struct node));
	ptr->next =NULL;
	ptr->data=value;
	if(head ==NULL){
		head =ptr;
		head->next=head;
	}
	else{
		tmp = head;
		while(tmp->next!=head){
			tmp = tmp->next;
		}
		tmp->next=ptr;
		ptr->next=head;
	}
}
void delete(int value){
	struct node *tmp,*del;
	if(head==NULL)
	return;
	tmp=head;
	if(tmp->data==value){
		head = tmp->next;
	}
	while(tmp->next!=NULL && tmp->next->data!=value){
		tmp = tmp->next;
	}
	if(tmp==NULL)
	return;
}


// void delete(int value) {
//     if (head == NULL) {
//         return;
//     }

//     struct node *tmp = head, *prev = NULL;

//     // If the node to be deleted is the head
//     if (head->data == value) {
//         while (tmp->next != head) {  // Find the node before head
//             tmp = tmp->next;
//         }
//         if (head->next == head) {  // Only one node in the list
//             free(head);
//             head = NULL;
//         } else {
//             tmp->next = head->next;
//             free(head);
//             head = tmp->next;
//         }
//         return;
//     }

//     prev = head;
//     tmp = head->next;
//     while (tmp != head && tmp->data != value) {
//         prev = tmp;
//         tmp = tmp->next;
//     }

//     if (tmp == head) {
//         return;  // Node with the given value not found
//     }

//     // Node found and needs to be deleted
//     prev->next = tmp->next;
//     free(tmp);
// }
void display() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct node *tmp = head;
    do {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    } while (tmp != head);
    printf("\n");
}


int main(){
	int n,value,task;
	scanf("%d",&n);
	for(int i =0;i<n;i++){
		scanf("%d %d",&task,&value);
		if(task==1)
		insert(value);
		else if(task==2)
		delete(value);
	}
	display();
}