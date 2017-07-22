#include <stdio.h>

main()
{
	int size=5, P = 0, D = 0;
	char check[20][20];
	//scanf("%d", &size);
	
	int i, j;
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			if(j == 4 && i != 4)
				scanf("%c\n", &check[i][j]);
			else
				scanf("%c", &check[i][j]);
		}
	}
	
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			switch(check[i][j])
			{
				case 'P':
					P++;
					break;
				case 'D':
					D++;
					break;
			}
		}
	}
	
	for(i = 0; i < size; i++)
	{
		for(j = 0; j<size; j++)
		{
			if(P >= D*2)
			check[i][j] = 'D';
			D++;
			printf("%c", check[i][j]);
		}
		printf("\n");
	}
}
