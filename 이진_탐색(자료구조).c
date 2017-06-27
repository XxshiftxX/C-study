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
			printf("%d 번째 - %d", i, arr[i]);
		}
		printf("\n");
		Sleep(1000);
	}
	return -1;
}

main() {
	printf("데헷?! 이진 탐색 프ㅡ로그램!\n");

	printf("\n탐색할 배열의 원소를 입력하세요.\n");

	// 반복문에서 사용될 변수
	int i,j,k;
	int input, key;
	for (i = 0; i < 10; i++) {
		printf("%d번째 원소 : ", i+1);

		scanf("%d", &input);
		if (input < arr[i - 1] && i > 0) {
			printf("정렬된 배열만 입력할 수 있어요. 크기 순서대로 다시 입력해주세요.\n");
			i = -1;
			continue;
		}
		
		arr[i] = input;
	}
	leng = i - 1;
	printf("탐색할 수를 입력해주세요. : ");
	scanf("%d", &key);
	
	search(key);
}
