#include <stdio.h>

int arr[13] = {8, 11, 12, 15, 16, 19, 20, 23, 25, 28, 29, 31, 33};

int f(int key)
{
	int i;
	for(i = 0; i<13; i++)
		if(arr[i] == key)
			return i;
	return -1;
}

int main()
{
	int key;
	scanf("%d", &key);
	printf("arr[%d]", f(key));
	return 0;
}
