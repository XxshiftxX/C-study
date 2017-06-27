#include <stdio.h>
#include <malloc.h>

struct node
{
	int data;
	struct node* right;
	struct node* left;
};

struct node *root = NULL;

void remove(int);
int find(int);
void insert(int);

int main(void)
{
	
}
	
void remove(int data)
{
	struct node *now = root;
	struct node *pre = NULL;
	while(1)
	{
		if(now->data == data)
		{
			return 1;
		}
		else if(now->data > data)
		{
			if (now->left == NULL)
				return 0;
			else
			{
				pre = now;
				now = now->left;
			}
		}
		else if(now->data < data)
		{
			if (now->right == NULL)
				return 0;
			else
			{
				pre = now;
				now = now->right;
			}
		}
	}
	
	if(now->right != NULL)
	{
		struct node *lift = now->right;
		while(lift->left != NULL)
		{
			lift = lift->left;
		}
		
		lift->left = now->left;
		
		if(pre->left == now)
			pre->left = lift;
		else
			pre->right = lift;
	}
}

int find(int data)
{
	struct node *now = root;
	while(1)
	{
		if(now->data == data)
		{
			return 1;
		}
		else if(now->data > data)
		{
			if (now->left == NULL)
				return 0;
			else
				now = now->left;
		}
		else if(now->data < data)
		{
			if (now->right == NULL)
				return 0;
			else
				now = now->right;
		}
	}
}

void insert(int data)
{
	if (root == NULL)
	{
		root = (struct node*)malloc(sizeof(struct node));
		root->data = data;
		root->right = NULL; 
		root->left = NULL;
	}
	else
	{
		struct node *now = root;
		while(1)
		{
			if(now->data == data)
			{
				break;
			}
			else if(now->data > data)
			{
				if (now->left == NULL)
				{
					now->left = (struct node*)malloc(sizeof(struct node));
					now->left->data = data;
					now->left->left = NULL;
					now->left->right = NULL;
					break;
				}
				else
					now = now->left;
			}
			else if(now->data < data)
			{
				if (now->right == NULL)
				{
					now->right = (struct node*)malloc(sizeof(struct node));
					now->right->data = data;
					now->right->left = NULL;
					now->right->right = NULL;
					break;
				}
				else
					now = now->right;
			}
		}	
	}
}
