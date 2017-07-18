#include <stdio.h>

void func(int(*fp)(int, int));
int sum(int, int);
int sub(int, int);
int mul(int, int);

int main(void)
{
	int sel;
	
	printf("1. 두 정수의 합\n");
	printf("2. 두 정수의 차\n");
	printf("3. 두 정수의 곱\n");
	printf("원하는 작업의 번호를 입력하세요 : ");
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
	
	printf("두 정수값을 입력하세요 : ");
	scanf("%d %d", &a, &b);
	res = fp(a, b);
	printf("결과값은 : %d\n", res); 
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
