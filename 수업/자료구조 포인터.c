#include <stdio.h>

main(){
	int data = 11;
	printf("«Ç¤Ñ«¿ªÏ : %d\n", data);
	printf("«Ç¤Ñ«¿ªÎñ¬á¶ªÏ : %d\n", &data);
	printf("«Ç¤Ñ«¿ªÎñ¬á¶ªÏ : %d\n", *&data);
	
	int* point1;
	point1 = &data;
	
	printf("«³«Ô¤Ñªµªìª¿«Ç¤Ñ«¿ªÏ : %d\n", *point1);
	printf("«Ý«¤«ó«ÈªÏ : %d\n", point1);
	
	int* point2;
	point2 = &point1;
	printf("«³«Ô¤Ñªµªìª¿«Ç¤Ñ«¿ªÏ : %d\n", *(*point2));
}
