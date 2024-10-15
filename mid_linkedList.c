#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
}*head =NULL;

void insert(int value){
	struct node *ptr,*tmp;
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr->next=NULL;
	ptr->data=value;
	if(head==NULL)
	head = ptr;
	else{
		tmp = head;
		while(tmp->next != NULL){
			tmp = tmp->next;
		}
		tmp->next=ptr;
	}
}
void display(int n){
	struct node *tmp,*rev;
	tmp =head;
    for(int i=1;i<=n/2;i++){
		tmp=tmp->next;
	}
	printf("%d",tmp->data);
	printf("\n");
	
	
}
int main(){
	int n,value;
	printf("Enter the no. of nodes: ");
	scanf("%d",&n);
	for(int i =0;i<n;i++){
		scanf("%d",&value);
		insert(value);
	}
	display(n);
	return 0;
}