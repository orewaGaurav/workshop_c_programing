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
	if(head==NULL)//no node exists
	return;
	tmp=head;
	if(tmp->data==value){//first node delete
		del =head->next;
		while(tmp->next!=head){
			tmp=tmp->next;
		}
		tmp->next=del;
		free(head);
		head = del;
	}
	while(tmp->next!=head && tmp->next->data!=value){
		tmp = tmp->next;
	}
	if(tmp->next==head)//no element found to delete
	return;
	del=tmp->next;
	tmp->next=del->next;
	free(del);
}

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