#include <stdio.h>

int arr[13] = {8, 11, 12, 15, 16, 19, 20, 23, 25, 28, 29, 31, 33};

int f(int key)
{
	int pivot, left = 0, right = 12;
	while(1)
	{
		pivot = (left + right) / 2;
		if(arr[pivot] > key)
			right = pivot - 1;
		else if(arr[pivot] < key)
			left = pivot + 1;
		else
			return pivot;
	}
	return -1;
}

int main()
{
	int key;
	scanf("%d", &key);
	printf("arr[%d]", f(key));
	return 0;
}
