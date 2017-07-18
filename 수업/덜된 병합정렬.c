#include <stdio.h>
main()
{
	int arr1[4] = {1, 5, 7, 9};
	int arr2[4] = {2, 4, 8 ,10};
	int arr[8];
	
	int pos1 = 0, pos2 = 0;
	int i;
	for(i = 0; i < 8; i++)
	{
		if(pos1 > 3 || pos2 > 3)
			break;
		
		if(arr1[pos1] < arr2[pos2])
		{
			arr[i] = arr1[pos1];
			pos1++;
		} else {
			arr[i] = arr2[pos2];
			pos2++;
		}
	}
}
