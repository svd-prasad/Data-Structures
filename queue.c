#include<stdio.h>
#include<stdlib.h>
#define MAX 100
struct node
{	
	int data;
	struct node *lchild;
	struct node *rchild;
};
struct node *getnode(int d)
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=d;
	newnode->lchild=NULL;
	newnode->rchild=NULL;
}
struct queue
{
	int front;
	int rear;
};
struct node **createqueue(int *front,int *rear)
{
	*front=0;
	*rear=0;
	struct node **treequeue=(struct node **)malloc(MAX *sizeof(struct node *));
	return treequeue;
}
void enqueue(struct node **Q,int *rear,struct node *node)
{
	Q[*rear]=node;
	(*rear)++;
}
struct node *dequeue(struct node **Q,int *front)
{
	(*front)++;
	return Q[(*front)-1];
	
}

void printlevel(struct node *root)
{
	struct node *temp;
	int *front,*rear;
	struct node **Q=createqueue(&front,&rear);
	temp=root;
	enqueue(Q,&rear,NULL);
	while(temp)
	{
		
		printf("%d\t",temp->data);
		if(temp->lchild)
			enqueue(Q,&rear,temp->lchild);
		if(temp->rchild)
			enqueue(Q,&rear,temp->rchild);
		temp=dequeue(Q,&front);
		if(temp==NULL)
			{
				enqueue(Q,&rear,NULL);
				printf("\n");
				temp=dequeue(Q,&front);
			}
	}
}
	
	
main()
{
	struct node *root=getnode(3);
	root->lchild=getnode(4);
	root->rchild=getnode(5);
	root->lchild->lchild=getnode(6);
	root->lchild->rchild=getnode(7);
	root->rchild->lchild=getnode(8);
	root->rchild->rchild=getnode(9);	
	printlevel(root);
}			
	
































