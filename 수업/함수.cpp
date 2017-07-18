#include <stdio.h>

int max(int a, int b, int c)
{
	if(a > b)
		if(a > c)
			return a;
		else
			return c;
	else
		if(b > c)
			return b;
		else
			return c;
}

main()
{
	int a, b, c, sum;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", max(a, b, c));
}
