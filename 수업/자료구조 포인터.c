#include <stdio.h>

main(){
	int data = 11;
	printf("�Ǥѫ��� : %d\n", data);
	printf("�Ǥѫ����ᶪ� : %d\n", &data);
	printf("�Ǥѫ����ᶪ� : %d\n", *&data);
	
	int* point1;
	point1 = &data;
	
	printf("���ԤѪ��쪿�Ǥѫ��� : %d\n", *point1);
	printf("�ݫ���Ȫ� : %d\n", point1);
	
	int* point2;
	point2 = &point1;
	printf("���ԤѪ��쪿�Ǥѫ��� : %d\n", *(*point2));
}
