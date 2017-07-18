#include <stdio.h>

main(){
	int up, down;
	scanf("%d %d", &down, &up);
	printf("%d", func(down, up, 2));
}

func(int down, int up, int index){
	down *= down;
	if(index < up)
		func(down, up, index+1);
	else return down;
}
