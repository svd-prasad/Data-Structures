#include<stdio.h>
struct tnode
{
	int data;
	struct tnode *left;
	struct tnode *right;
};
struct snode
{
	struct tnode *t;
	struct snode *next;
};
typedef struct tnode * tptr;
typedef struct snode * sptr;
tptr get_tree_node(int d)
{
	tptr node=(tptr)malloc(sizeof(struct tnode));
	node->data=d;
	node->left=NULL;
	node->right=NULL;
	return node;
}
void postorder(tptr root)
{
	if(root==NULL) return;
	else
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d\n",root->data);
	}
}
void push(sptr s,tptr t1)
{
	sptr stack=(sptr)malloc(sizeof(struct snode));
	stack->t=t1;
	stack->next=NULL;
	if(s==NULL)
	{
		return stack;
	}
	else
	{
		stack->next=s;
	}
	return stack;
}

main()
{
	tptr root=get_tree_node(4);
	root->left=get_tree_node(1);
	root->right=get_tree_node(6);
	postorder(root);
}
