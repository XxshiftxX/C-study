#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int leng;
int arr[10];

int search(int key)
{
	int pivot, left = 0, right = leng;
	while(1)
	{
		pivot = (left + right) / 2;
		if(arr[pivot] > key)
			right = pivot - 1;
		else if(arr[pivot] < key)
			left = pivot + 1;
		else
			return pivot;
	}
	return -1;
}


main(){
	printf("Hello world!\n");
	printf("\n\nũ��.... ���� ���α׷������� ������ ���㰡���Ѵ�....\n\n\n");
	int i,j,k;
	short kor = 0;
	
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
			
		if(kor)
		{
			switch(i){
			case 0:
				printf("��... ���� ù");
				break;
			case 1:
				printf("��"); 
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("�ټ�");
				break;
			case 5:
				printf("����");
				break;
			case 6:
				printf("�ϰ�");
				break;
			case 7:
				printf("����");
				break;
			case 8:
				printf("��ȩ");
				break;
			case 9:
				printf("��");        
				break;
			}
		} else {
			printf("%d", i+1);
		}
		printf("��° �����ҡ��� �Է��ض�....  \n");
		int input;
		scanf("%d", &input);
		
		if(input == 4510471)
		{
			printf("��... ���� �׸��δ°ǰ�...");
			break;
		}
		if(input == 14461009 && kor == 0)
		{
			printf("����롻 �ֹ��� Ȱ��ȭ�Ǿ���.");
			kor++;
			goto RE_ZERO_KARA_HAZIMERU_TANSAKU_SEKATSU;
		} 
		if(input < arr[i-1])
		{
			printf("�̷�... �̰� �����ġ����� ���� ���Ұ� �ƴѰ�...\n");
			goto RE_ZERO_KARA_HAZIMERU_TANSAKU_SEKATSU;
		}
		
		arr[i] = input;
		leng++;
	}
	int key;
	printf("\n\nã����� �����ҡ��� �Է��ض�....  ");
	scanf("%d", &key);

	int rlt = search(key);
	if(rlt != -1)
		printf("%d��°�� �װ� ã���ִ���%d���� �����ϴ±�...", rlt+1, key);
	else
		printf("�װ� Ž���ϴ� ��%d���� �������� �ʴ´�...", key);
}
