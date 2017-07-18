#include <stdio.h>

main()
{
	char str[] = "Good morning!";
	
	int input;
	int i;
	for(i = 0; i < 4; i++)
	{
		scanf("%d ", &input);
		printf("%c ", str[input]);
	}
	scanf("%d", &input);
	printf("%c", str[input]);
}
