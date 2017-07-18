#include <stdio.h>

void damage(int* hp)
{
	*hp -= 100;
	printf("!!!  100 데미지를 입었다!  !!!\n");
}

int main()
{
	typedef struct RPG{
		char name[10];
		int HP;
		int MP;
		int Lev;
		int AP;
		int EXP;
		char class_kdh[10];
		int age;
		int ATK;
		int DEF;
		int LUX;
		int CRT;
		int SPD;
		char gender;
		char kind[10];
		int Tired;
	}RPG;
	
	RPG cal;
	
	cal.EXP = 0;
	int input;
	int loop = 1;
	char exp[21] = "□□□□□□□□□□";
	exp[0] = '아';
	printf("%s", exp); 
	while(loop)
	{
		printf("LEVEL : %d   EXP : %s\n", cal.EXP * 10, exp);
		scanf("%d", &input);
		switch(input)
		{
			case 9999:
				cal.EXP += 1;
				printf("%d", (cal.EXP - 1) * 2);
				exp[(cal.EXP - 1) * 2] = '+';
				printf("EXP 증가\n");
				break;
		}
	}
	return 0;
}
