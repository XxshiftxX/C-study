#include <stdio.h>

int arr[10];

main(){
	int i, j;
	for(i = 0; i < 9; i++)
		scanf("%d ", (arr+i));
	scanf("%d", (arr+9));
	
	int min, first = 0;
	for(i = 0; i < 9; i++)
	{
		min = i;
		for(j = i; j < 10; j++)
		{
			if (arr[min] > arr[j])
				min = j;
		}
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
	
	for(i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}
