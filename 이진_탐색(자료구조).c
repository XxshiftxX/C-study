#include <stdio.h>
#include <windows.h>

int leng = 10;
int arr[10];

int search(int key)
{
	int i;
	int pivot, left = 0, right = leng - 1;
	while (1)
	{
		system("cls");
		pivot = (left + right) / 2;
		if (arr[pivot] > key)
			right = pivot - 1;
		else if (arr[pivot] < key)
			left = pivot + 1;
		else
			return pivot;
			
		for(i = 0; i < leng; i++)
		{
			printf("%d ��° - %d", i, arr[i]);
		}
		printf("\n");
		Sleep(1000);
	}
	return -1;
}

main() {
	printf("����?! ���� Ž�� ���ѷα׷�!\n");

	printf("\nŽ���� �迭�� ���Ҹ� �Է��ϼ���.\n");

	// �ݺ������� ���� ����
	int i,j,k;
	int input, key;
	for (i = 0; i < 10; i++) {
		printf("%d��° ���� : ", i+1);

		scanf("%d", &input);
		if (input < arr[i - 1] && i > 0) {
			printf("���ĵ� �迭�� �Է��� �� �־��. ũ�� ������� �ٽ� �Է����ּ���.\n");
			i = -1;
			continue;
		}
		
		arr[i] = input;
	}
	leng = i - 1;
	printf("Ž���� ���� �Է����ּ���. : ");
	scanf("%d", &key);
	
	search(key);
}
