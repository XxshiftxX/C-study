#include <stdio.h>

int main()
{
	FILE *fp;
	char str[] = "Hello Mr my Yesterday";
	
	fp = fopen("C://Tester.txt", "a");
	
	int i = 0; 
	while(str[i] != NULL)
	{
		fputc(str[i++], fp);
	}
}
