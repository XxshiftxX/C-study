#include <stdio.h>

int arr[10];

main(){
	int i, j;
	for(i = 0; i < 9; i++)
		scanf("%d ", (arr+i));
	scanf("%d", (arr+9));
	
	int min;
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
	
	printf("범인은 >> %d << 입니당\n", arr[2]); 
}
