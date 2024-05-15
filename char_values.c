#include <stdio.h>

int main(){
	int min = 0;
	int max = 600;
	printf("Char:Val\n");
	for (int i = min; i < max + 1; i++){
		printf("%c:%d\n",i, i);
	}
}
