#include <stdio.h>
#define swap(temp,a,b) ((temp = a), (a,b), (b=temp))

int main()
{
	int array[]={5,9,10,3,7,2,12};
	int min;
	int i, temp;
	int n = sizeof(array)/4;
	min = 0;
	for(i=1; i<n; i++)
		if(array[min]>array[i])
			min = i;
	swap(temp, array[min], array[0]);
	for(i = 0; i < n; i++)
		printf("%d ", array[i]);
}
