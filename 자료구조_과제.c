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
					printf("����������������< ALL in ONE  (UP / DOWN / PIVOT)\n");
				else
					printf("����������������< UP / DOWN\n");
			else if (i == left)
				if(left == pivot)
					printf("����������������< UP / PIVOT\n");
				else
					printf("������������������UP\n");
			else if (i == right)
				if(right == pivot)
					printf("����������������< DOWN / PIVOT\n");
				else
					printf("������������������DOWN\n");
			else if (i == pivot)
				printf("������������������PIVOT\n");
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
	printf("\n\nũ��.... ���� ���α׷������� ������ ���㰡���Ѵ�....\n\n\n");
	int i;
	
	RE_ZERO_KARA_HAZIMERU_TANSAKU_SEKATSU:
	leng = 0;
	printf("\n\n\n");
	for(i = 0; i < 10; i++){
		int r = rand() % 4;
		
		if(i != 0){
			switch(r){
			case 1:
				printf("�̹����� ");
				break;
			case 2:
				printf("�׷��ٸ�... ");
				break;
			case 3:
				printf("ȣ��... ");
				break;
			default:
				break;
			}
		}
		
		printf("%d��° �����ҡ��� �Է��ض�....  \n", i+1);
		int input;
		scanf("%d", &input);
		
		if(input == 4510471)
		{
			printf("��... ���� �׸��δ°ǰ�...");
			break;
		}
		
		if(input < 0)
		{
			printf("�ʹ� ���� ���Ҵ� ���Է¡��� �� ����...\n");
			i--;
			continue;
		}
		if(input < arr[i-1])
		{
			printf("�̷�... �̰� �����ġ����� ���� ���Ұ� �ƴѰ�...\n");
			goto RE_ZERO_KARA_HAZIMERU_TANSAKU_SEKATSU;
		}
		
		arr[i] = input;
	}
	leng = i;
	int key;
	printf("\n\nã����� �����ҡ��� �Է��ض�....  \n ");
	scanf("%d", &key);

	int rlt = search(key);
	if(rlt != -1)
		printf("�װ� ã���ִ���%d���� ���� ��ǥ %d�� �����ϴ±�...", key, rlt+1);
	else
		printf("�װ� Ž���ϴ� ��%d���� �������� �ʴ´�...", key);
}


