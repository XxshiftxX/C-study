#include <stdio.h>

void func(int(*fp)(int, int));
int sum(int, int);
int sub(int, int);
int mul(int, int);

int main(void)
{
	int sel;
	
	printf("1. �� ������ ��\n");
	printf("2. �� ������ ��\n");
	printf("3. �� ������ ��\n");
	printf("���ϴ� �۾��� ��ȣ�� �Է��ϼ��� : ");
	scanf("%d", &sel);
	
	switch(sel)
	{
	case 1: func(sum); break;
	case 2: func(sub); break;
	case 3: func(mul); break;
	}
}

void func(int(*fp)(int, int))
{
	int res;
	int a, b;
	
	printf("�� �������� �Է��ϼ��� : ");
	scanf("%d %d", &a, &b);
	res = fp(a, b);
	printf("������� : %d\n", res); 
}

int sum(int a, int b)
{
	return (a+b);
}

int sub(int a, int b)
{
	return (a-b);
}

int mul(int a, int b)
{
	return (a*b);
}
