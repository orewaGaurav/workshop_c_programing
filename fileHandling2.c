#include<stdio.h>
int main()
{
	FILE *fp;
	int roll , choice;
	float marks;
	char name[50];
	
	fp = fopen("Myfile.txt", "w");
	
	if(fp==NULL)
	{
		printf("file does not exist\n");
		return 0;
	}
	while(1)
	{
	
	printf("Enter roll no : ");
	scanf("%d",&roll);
	fprintf(fp,"Roll = %d\n",roll);
	
	printf("Enter marks : ");
	scanf("%f",&marks);
	fprintf(fp,"Marks : %f\n",marks);
	
	printf("Enter Name : ");
	scanf("%s",&name);
	fprintf(fp, "Name : %s",name);
	
	printf("\n1-> Enter more data\n->2 No more data\n Enter your choice : ");
	scanf("%d",&choice);
	if (choice == 2)
	break;
	}
	printf("Files created successfully");
	fclose(fp);
}