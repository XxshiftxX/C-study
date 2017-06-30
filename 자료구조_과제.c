#include <stdio.h>
#include <windows.h>

int leng;
int arr[10];

int search(int key)
{
	int pivot, left = 0, right = leng-1, i;
	while(1)
	{
		system("cls");
			
		pivot = (left + right) / 2;
		
		printf("leng : %d // pivot : %d // up : %d // down : %d\n", leng, pivot + 1, left + 1, right + 1);
		for(i = 0; i < leng; i++)
		{
			printf("(%d)  >> %d", i+1, arr[i]);
			if(i == left && i == right)
				if (i == pivot)
					printf("────────< ALL in ONE  (UP / DOWN / PIVOT)\n");
				else
					printf("────────< UP / DOWN\n");
			else if (i == left)
				if(left == pivot)
					printf("────────< UP / PIVOT\n");
				else
					printf("────────┐UP\n");
			else if (i == right)
				if(right == pivot)
					printf("────────< DOWN / PIVOT\n");
				else
					printf("────────┘DOWN\n");
			else if (i == pivot)
				printf("────────┤PIVOT\n");
			else
				printf("\n");
		}
		if(left == right && arr[pivot] != key)
			break;
		if(arr[pivot] > key)
			right = pivot - 1;
		else if(arr[pivot] < key)
			left = pivot + 1;
		else
			return pivot;
		Sleep(2000);
	}
	return -1;
}


main(){
	printf("Hello world!\n");
	printf("\n\n크큿.... 나에 프로그램으로의 출입을 『허가』한다....\n\n\n");
	int i;
	
	RE_ZERO_KARA_HAZIMERU_TANSAKU_SEKATSU:
	leng = 0;
	printf("\n\n\n");
	for(i = 0; i < 10; i++){
		int r = rand() % 4;
		
		if(i != 0){
			switch(r){
			case 1:
				printf("이번에는 ");
				break;
			case 2:
				printf("그렇다면... ");
				break;
			case 3:
				printf("호오... ");
				break;
			default:
				break;
			}
		}
		
		printf("%d번째 『원소』를 입력해라....  \n", i+1);
		int input;
		scanf("%d", &input);
		
		if(input == 4510471)
		{
			printf("큿... 이제 그만두는건가...");
			break;
		}
		
		if(input < 0)
		{
			printf("너무 작은 원소는 『입력』할 수 없네...\n");
			i--;
			continue;
		}
		if(input < arr[i-1])
		{
			printf("이런... 이건 『정렬』되지 않은 원소가 아닌가...\n");
			goto RE_ZERO_KARA_HAZIMERU_TANSAKU_SEKATSU;
		}
		
		arr[i] = input;
	}
	leng = i;
	int key;
	printf("\n\n찾고싶은 『원소』를 입력해라....  \n ");
	scanf("%d", &key);

	int rlt = search(key);
	if(rlt != -1)
		printf("네가 찾고있던『%d』는 현재 좌표 %d에 존재하는군...", key, rlt+1);
	else
		printf("네가 탐색하던 『%d』는 존재하지 않는다...", key);
}


