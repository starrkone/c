#include <stdio.h>

void sum(int i, int j);

int main(){
	
	//char a = 255;
	/*
	int a1 = 0;
	int b = 255;
	for(;a1<150;a1++){
		printf("%d, %c\n", a1,a1);
	}
	*/
	//printf("\nchar is %d, int is %d\n", a,b);
	sum(5,6);
	return -10;
}

void sum(int i, int j){
	printf("%d\n", i+j);
//	return 1;
}

