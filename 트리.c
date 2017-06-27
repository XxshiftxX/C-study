#include <stdio.h>

int tree[23];
main(){
	int i;
	for(i = 0; i < 23; i++)
		tree[i] = -1;
	
	tree[0] = 7;
	insert(8);
	insert(3);
	printf("%d %d\n", find(2), find(8));
	insert(2);
	printf("%d %d\n", find(2), find(8));
}

void insert(int data){
	int i = 0;
	while(1)
	{
		if(tree[i] == data)
		{
			break;
		}
		else if(tree[i] > data)
		{
			if (tree[i*2+1] == -1)
			{
				tree[i*2+1] = data;
				break;
			}
			else
				i = i*2+1;
		}
		else if(tree[i] < data)
		{
			if (tree[i*2+2] == -1)
				tree[i*2+2] = data;
			else
				i = i*2+2;
		}
	}
}

int find(int data)
{
	int i = 0;
	while(1)
	{
		if(tree[i] == data)
		{
			return 1;
		}
		else if(tree[i] > data)
		{
			if (tree[i*2+1] == -1)
				return 0;
			else
				i = i*2+1;
		}
		else if(tree[i] < data)
		{
			if (tree[i*2+2] == -1)
				return 0;
			else
				i = i*2+2;
		}
	}
}
