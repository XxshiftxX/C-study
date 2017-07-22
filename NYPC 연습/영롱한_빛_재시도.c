#include <stdio.h>

char pos[30][30];
main(){
	int i, j;
	
	int w, h;
	scanf("%d %d", &w, &h);
	
	char save[31];
	for(i = 0; i < h; i++)
	{
		scanf("%s", save);
		for(j = 0; j < w; j++)
		{
			pos[j][i] = *(save+j);
		}
	}
}
