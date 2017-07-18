#include <stdio.h>

main()
{
	int arr[5] = {10, 20, 30, 40, 50};
	int *ap = arr;
	int i;
	
	for(i = 0; i<5; i++)
	{
		printf("%5d", *ap);
		ap++;
	}
}
