#include<stdio.h>
#include<stdlib.h>

struct lnode
{
	int data;
	struct lnode *next;
};
void print(struct lnode *head);
struct lnode *getnode(int d)
{
	struct lnode *newnode;
	newnode=(struct lnode *)malloc(sizeof(struct lnode));
	newnode->data=d;
	newnode->next=NULL;
	return newnode;
}
void insert(struct lnode **head,int i)
{
	struct lnode *temp,*temp1,*prev;
	temp=getnode(i);
	temp1=*head;
	if(*head==NULL)
		*head=temp;
	else
	{	
		if(i<((*head)->data))
		{
			temp->next=*head;
			*head=temp;
		}
		else
		{
			while(temp1->next!=NULL &&i>temp1->data)
			{
				prev=temp1;	
				temp1=temp1->next;
			}
			if(temp1->next!=NULL)
			{
				prev->next=temp;
				temp->next=temp1;
			}
			else
			{	
				temp1->next=temp;
			}

		}
	}
}
void reverse(struct lnode **head)
{
	struct lnode *temp,*temp1,*cur;
	temp=*head;
	cur=NULL;
	while(temp!=NULL)
	{
		temp1=temp->next;
		temp->next=cur;
		cur=temp;
		temp=temp1;
	}
	*head=cur;
}

int hasknodes(struct lnode *head,int k)
{
	struct lnode *temp;
	temp=head;
	int count=0;
	while(head!=NULL)
	{
		head=head->next;
		count++;
	}
	if(k<=count)
		return 1;
	else
		return 0;
}
void reverseknodes(struct lnode **head,int k)
{
	struct lnode *test,*temp,*temp1,*cur,*prev;
	temp=*head;
	test=*head;
	cur=NULL;
	int count,flag=0;
	while(1)
	{
		if(hasknodes(temp,k))
		{
			cur=NULL;//take care
			count=0;
			while(temp)
			{
				temp1=temp->next;
				temp->next=cur;
				cur=temp;
				temp=temp1;
				count++;
				
				if(count==k)
					break;
						
			
			}
			if(flag!=1)
			{	
				*head=cur;
				flag=1;
			}
			else
			{	
				prev=*head;
				
				while(prev->next!=NULL)
					prev=prev->next;
				prev->next=cur;
				
			}
			
		}
		else
		{
			prev=*head;
			while(prev->next!=NULL)
				prev=prev->next;
			if(temp!=*head)
				prev->next=temp;
			else
				prev->next=NULL;
			return;
		}
	}
	//*head=cur;
}
void print(struct lnode *head)
{
	struct lnode *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

void printreverse(struct lnode *head)
{
	struct lnode *temp;
	temp=head;
	if(head==NULL)
		return;
	else
	{
		printreverse(temp->next);
		printf("%d\t",temp->data);	
	}
	
}	
	
main()
{
	int i,k;
	struct lnode *head=NULL;
	insert(&head,10);
	insert(&head,9);
	insert(&head,8);
	insert(&head,7);
	insert(&head,6);
	insert(&head,5);
	insert(&head,4);	
	insert(&head,3);
	insert(&head,2);
	insert(&head,1);
	print(head);
	reverseknodes(&head,4);
	print(head);
}		






















