#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node* next;
};
struct node* createnode()
{
	int x;
	struct node* newnode=NULL;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("memory not allocated");
	}
	else
	{
		printf("enter data");
		scanf("%d",&x);
		newnode->data=x;
		newnode->next=NULL;
		return newnode;
	}
}
void createlinkedlist(struct node** head)
{
	struct node* newnode=NULL;
	struct node* trav=*head;
	newnode=createnode();
	if(*head==NULL)
	{
		*head=newnode;
		
	}
	else
	{
		while(trav->next!=NULL)
		{
		
			trav=trav->next;
		}
		trav->next=newnode;
	}

}
void display(struct node* head )
{
	if(head==NULL)
	{
		printf("linked list not exists");
	}
	else
	{
	while(head!=NULL)
	{
		printf("%d\n",head->data);
		head=head->next;
	}
	}
}
int countnode(struct node* head)

{
	int n=0;
	while(head!=NULL)
	{
		n++;
		head=head->next;
	}
	return n;
}
 void insertatfirst(struct node ** head)
 {
	 struct node *newnode=createnode();
	 newnode->next=*head;
	 *head=newnode;
 }
 void insertatlast(struct node**head)
 {
	 createlinkedlist(head);
 }
  
 void insertatpos(struct node**head)
{
	int pos,n=0,i;
	struct node*travnode=*head;
	struct node* newnode=NULL;

	printf("enter position");
	scanf("%d",&pos);
	n=countnode(*head);
	if(pos<1||pos>n+1)
	{
		printf("enter valid position");
		insertatpos(head);
	}
	else if(pos==1)
	{
		insertatfirst(head);
	}
	else if(pos==n+1)
	{
		insertatlast(head);
	}
	else
	{
		newnode=createnode();

		for(i=1;i<n-1;i++)
		{
			travnode=travnode->next;
		}

		newnode->next=travnode->next;
		travnode->next=newnode;
	}
 }
 void deleteatfirst(struct node** head)
 { 
	 struct node* travnode;
	 if((*head)==NULL)
	 {
		 printf("linked list not exis");
	 }
	 else
	 {
	  travnode=*head;
			 *head=travnode->next;
			 free(travnode);
 }
 }
 void deleteatlast(struct node** head)
 {
	 struct node* travnode=*head;
	 while((travnode->next->next)!=NULL)
	 {
		 travnode=travnode->next;
	 }
	 free(travnode->next);
 }

 void deleteatpos(struct node** head)
 {
	 int pos,n,i;
	 struct node*tempnode;
	 struct node*deletenode;
	 printf("enter position for deletion");
	 scanf("%d",&pos);
	 n=countnode(*head);
	 if(pos<1||pos>n)
	 {
		 printf("enter valid position for deletion");
		 deleteatpos(head);

	 }
	 else if(pos==1)
		 {
			deleteatfirst(head);
		 }
	 else if(pos==n)
	 {
		 deleteatlast(head);
	 }
	 else
	 {
		 tempnode=*head;
	for(i=1;i<pos-1;i++)
	{
		tempnode=tempnode->next;
	}
	deletenode=tempnode->next;

	tempnode->next=tempnode->next->next;
	free(deletenode);
	 }



		 

	  }
 void search(struct node* head)
 {
	 int data;
	 int flag=0;

	 printf("enter data to be searched");
		 scanf("%d",&data);
		 for(;head!=NULL;head=head->next)
		 {
			 if(head->data==data)
			 {
				 printf("data found");
				 flag=1;

				 break;
			 }
		 }
		 if(flag==0)
		 {
			 printf("data not found");
		 }
 }








 











int main()
{
	int choice;
	struct node* first=NULL;
	do
	{
	printf("1.create linked list");
	printf("\n2.display linked list");
	
	printf("\n 3.insert at position");
	printf("\n4.delete at first");
	printf("\n5.delete at last");
	printf("\n6.delete at position");
	printf("\n7.search data");

	printf("\n8.exit");
	printf("\n enter choice");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:createlinkedlist(&first);
			   break;
	case 2:display(first);
		break;
	case 3:insertatpos(&first);
		break;
	case 4:deleteatfirst(&first);
		break;
	case 5:deleteatlast(&first);
		break;
case 6:deleteatpos(&first);
		break;
case 7:search(first);
	break;
	case 8:exit;
			   break;
	}
	}while(choice!=8);
	return 0;
	getch();
}