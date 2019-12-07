#include <stdio.h>
#include <unistd.h>

int main(){
	//char a = 255;
	
	int a1 = 0;
	//int b = 255;
	for(a1=1;a1<=150;a1++){
		printf("\b\b\b");
		if(a1 < 10)
			printf("000\b%d", a1);
		else if(a1 < 100)
			printf("000\b\b%d", a1);
		else
			printf("000\b\b\b%d", a1);
		sleep(1);
		fflush(stdout);
	}
	printf("\ncomplete %d\n", a1-1);
	return 0;
}
