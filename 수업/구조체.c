#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
	int id;
	char name[20];
	double grade;
};

int main(void)
{
	struct student list[3] = {
		{315, "시프트", 2.4},
		{316, "유카리", 3.1},
		{214, "유즈키", 2,1}
	};
	print_list(list);
}

void print_list(struct student *lp){
	printf("%4d %10s %.1lf\n", (lp+1)->id, (lp)->name, (lp)->grade);
}
