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
	
	int light[2];
	for(i = 0; ; i++)
	{
		if((pos+i) == 'O')
		{
			light[0] = i % w;
			light[1] = i / w;
			break;
		}
	}
	
	int check[2];
	int resP[4];
	char resC[4];
	char dir;
	for(i = 0; i < 4; i++)
	{
		check[0] = light[0];
		check[1] = light[1];
		switch(i)
		{
			case 0:
				dir = 'U';
				break;
			case 1:
				dir = 'R';
				break;
			case 2:
				dir = 'D';
				break;
			case 3:
				dir = 'L';
				break;
		}
		while(1)
		{
			switch(dir)
			{
				case 'U':
					if(check[1] < 0){
						resP[i] = check[0];
						resC[i] = 'U';
					}
					if(pos[ check[0] ][ check[1] ] == '/'){
						dir = 'R';
						continue;
					}
					if(pos[ check[0] ][ check[1] ] == '\\'){
						dir = 'L';
						continue;
					}
					check[1]--;
					break;
				case 'D':
					if(check[1] > h){
						resP[i] = check[0];
						resC[i] = 'D';
					}
					if(pos[ check[0] ][ check[1] ] == '/'){
						dir = 'L';
						continue;
					}
					if(pos[ check[0] ][ check[1] ] == '\\'){
						dir = 'R';
						continue;
					}
					check[1]++;
					break;
				case 'L':
					if(check[0] < 0){
						resP[i] = check[1];
						resC[i] = 'L';
					}
					if(pos[ check[0] ][ check[1] ] == '/'){
						dir = 'D';
						continue;
					}
					if(pos[ check[0] ][ check[1] ] == '\\'){
						dir = 'U';
						continue;
					}
					check[0]--;
					break;
				case 'R':
					if(check[0] > w){
						resP[i] = check[1];
						resC[i] = 'U';
					}
					if(pos[ check[0] ][ check[1] ] == '/'){
						dir = 'U';
						continue;
					}
					if(pos[ check[0] ][ check[1] ] == '\\'){
						dir = 'D';
						continue;
					}
					check[0]++;
					break;
			}
		}
	}
	
	for(i = 0; i < 4; i++)
		printf("%c %d\n", resC[i], resP[i]);
}
