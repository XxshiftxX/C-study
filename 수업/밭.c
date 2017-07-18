#include <stdio.h>

int value[5][5];
int f(int a, int b)
{
	int sum = 0, i, j;
	for(i = a; i < a+4; i++)
		for(j = b; j < b + 4; j++)
			sum += value[i][j];
	return sum;
}

main(){
	int i, j, max = 0;
	int geti, getj;
	for(i = 0; i < 5; i++)
		for(j = 0; j < 5; j++)
			scanf("%d", &value[i][j]);
			
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			if(max < f(i, j))
			{
				max = f(i,j);
				geti = i;
				getj = j;
			}
		}
	}
				
	
	printf("\n\n\n");
	
	printf("%d  /  (%d, %d) to (%d, %d)\n\n", max, geti+1, getj+1, geti+3, getj+3); 
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
			printf("%d ", value[i][j]);
		printf("\n");
	}
}
