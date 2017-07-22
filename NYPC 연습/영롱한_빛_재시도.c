#include <stdio.h>
#include <windows.h>

char pos[30][30];
main(){
	int i, j; //반복문용 
	int k;
	
	int w, h; //가로, 세로길이 
	int light[2]; 
	scanf("%d %d", &w, &h);
	
	// 입력받기. 
	char save[31];
	for(i = 0; i < h; i++)
	{
		scanf("%s", save);
		for(j = 0; j < w; j++)
		{
			pos[j][i] = *(save+j);
		}
	}
	
	// 전구 위치 찾기
	for(i = 0; i < h; i++)
	{
		for(j = 0; j < w; j++)
		{
			if(pos[j][i] == '0')
			{
				light[0] = j;
				light[1] = i;
			}
		}
	}
	
	char mod;
	int x, y;
	int count = 0;
	
	char resC[4];
	int resN[4];
	// 전구 연산
	for(i = 0; i < 4; i++)
	{
		// 초기 모드 설정부 (A)
		switch(i)
		{
			case 0:
				mod = 'u';
				break;
			case 1:
				mod = 'd';
				break;
			case 2:
				mod = 'r';
				break;
			case 3:
				mod = 'l';
				break;
		} // (A end)
		x = light[0];
		y = light[1];
		
		// 턴 진행부 (B) 
		while(1)
		{
			switch(mod)
			{
				case 'u':
					y--;
					if(y < 0){
						resC[i] = 'D';
						resN[i] = x+1;
						goto BREAK;
					}
					else if(pos[x][y] == '/'){
						mod = 'r';
					}
					else if(pos[x][y] == '\\'){
						mod = 'l';
					}
					break;
				case 'd':
					y++;
					if(pos[x][y] == '/'){
						mod = 'l';
					}
					else if(pos[x][y] == '\\'){
						mod = 'r';
					}
					else if(y >= h){
						resC[i] = 'U';
						resN[i] = x+1;
						goto BREAK;
					}
					break;
				case 'r':
					x++;
					if(pos[x][y] == '/'){
						mod = 'u';
					}
					else if(pos[x][y] == '\\'){
						mod = 'd';
					}
					else if(x >= w){
						resC[i] = 'L';
						resN[i] = y+1;
						goto BREAK;
					}
					break;
				case 'l':
					x--;
					if(pos[x][y] == '/'){
						mod = 'd';
					}
					else if(pos[x][y] == '\\'){
						mod = 'u';
					}
					else if(x < 0){
						resC[i] = 'R';
						resN[i] = y+1;
						goto BREAK;
					}
					break;
			}
			
			system("cls");
			count++;
			printf("%d\n", count);
			printf("light : (%d, %d) nowPos : (%c)\n", light[0], light[1], pos[x][y]);
			printf("(%d, %d) %c\n", x, y, mod);
			for(j = 0; j < w; j++)
			{
				for(k = 0; k < h; k++)
				{
					if(x == k && y == j)
						printf("0");
					else
						printf(".");
				}
				printf("\n");
			}
			printf("%c %d\n", resC, resN);
			Sleep(300);
		} // (B end)
		BREAK:;
	} 
	system("cls");
	for(i = 0; i < 4; i++)
	{
		printf("%c %d\n", resC[i], resN[i]);
	}
}
